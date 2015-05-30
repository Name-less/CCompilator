----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:15:53 05/21/2015 
-- Design Name: 
-- Module Name:    processeur - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- extern ports for the processor
entity processeur is
	Port ( 
			clk_processor : in std_logic;
			rst_processor : in std_logic;
			out_processor : out std_logic_vector (7 downto 0)
	);
end processeur;

architecture Behavioral of processeur is

-- each module

component ex_alu PORT(
									  A : in  STD_LOGIC_VECTOR (7 downto 0);
									  B : in  STD_LOGIC_VECTOR (7 downto 0);
									  Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0); --operation
									  S : out  STD_LOGIC_VECTOR (7 downto 0); --result
									  NOZC : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

component di Port( 
									  addra : in  STD_LOGIC_VECTOR (3 downto 0);
									  addrb : in  STD_LOGIC_VECTOR (3 downto 0);
									  addrw : in  STD_LOGIC_VECTOR (3 downto 0);
									  W : in  STD_LOGIC; --read(0) or write(1)
									  DATA : in  STD_LOGIC_VECTOR (7 downto 0);
									  RST : in  STD_LOGIC;
									  CLK : in  STD_LOGIC;
									  QA : out  STD_LOGIC_VECTOR (7 downto 0);
									  QB : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component mem Port(
									  addr : in  STD_LOGIC_VECTOR (7 downto 0);
									  inMEM : in  STD_LOGIC_VECTOR (7 downto 0);
									  RW : in  STD_LOGIC;
									  RST : in  STD_LOGIC;
									  CLK : in  STD_LOGIC;
									  outMEM : out  STD_LOGIC_VECTOR (7 downto 0));
end component;
									  
component li Port(
									  addr : in  STD_LOGIC_VECTOR (7 downto 0);
									  alea : in std_logic;
									  outLI : out  STD_LOGIC_VECTOR (31 downto 0);
									  CLK : in  STD_LOGIC);
end component;

component lc Port (
						entree_lc : in std_logic_vector (7 downto 0);
						sortie_lc : out  STD_LOGIC_vector (2 downto 0);
						clk : in std_logic
						);
end component;

component ip port (
						alea : in std_logic;
						rst : in std_logic;
						clk : in std_logic;
						pc : out std_logic_vector (7 downto 0)
						);
end component;

---------- Signaux pour les modules -------------

---------- Interface LI/DI ------------
signal A_LI_DI : std_logic_vector ( 7 downto 0);
signal B_LI_DI : std_logic_vector ( 7 downto 0);
signal OP_LI_DI : std_logic_vector ( 7 downto 0);
signal C_LI_DI : std_logic_vector ( 7 downto 0);

---------- Interface DI/EX ------------
signal A_DI_EX : std_logic_vector ( 7 downto 0);
signal B_DI_EX : std_logic_vector ( 7 downto 0);
signal C_DI_EX : std_logic_vector ( 7 downto 0);
signal OP_DI_EX : std_logic_vector ( 7 downto 0);

---------- Interface EX/MEM ------------
signal A_EX_MEM : std_logic_vector ( 7 downto 0);
signal B_EX_MEM : std_logic_vector ( 7 downto 0);
signal OP_EX_MEM : std_logic_vector ( 7 downto 0);

---------- Interface MEM/RE ------------
signal A_MEM_RE : std_logic_vector ( 7 downto 0);
signal B_MEM_RE : std_logic_vector ( 7 downto 0);
signal OP_MEM_RE : std_logic_vector ( 7 downto 0);

-------------------- Modules ---------------------
--------------------------------------------------

--------- Memoire des instructions ----------
signal inst_addr : std_logic_vector ( 7 downto 0);
signal li_di : std_logic_vector ( 31 downto 0);

------------ Multiplexers -------------
signal mux_di : std_logic_vector (7 downto 0);
signal mux_ex : std_logic_vector (7 downto 0);
signal mux_mem : std_logic_vector (7 downto 0);
signal mux_re : std_logic_vector (7 downto 0);

----------------- LC ----------------
signal out_lc_ex : std_logic_vector (2 downto 0);
signal out_lc_mem : std_logic_vector (2 downto 0);
signal out_lc_re : std_logic_vector (2 downto 0);

----------------- ALEA --------------
signal A_BUFF : STD_LOGIC_VECTOR (7 downto 0);
signal B_BUFF : STD_LOGIC_VECTOR (7 downto 0);
signal C_BUFF : STD_LOGIC_VECTOR (7 downto 0);
signal OP_BUFF : STD_LOGIC_VECTOR (7 downto 0);
signal alea_processor : std_logic;
signal cdiex_buff : STD_LOGIC_VECTOR (7 downto 0);


------------- Fin des signaux ---------------------
---------------------------------------------------

begin

--												in/8   		alea/1		 out/32     clk
instruction_memory : li port map (inst_addr, alea_processor, li_di, clk_processor);

--											     @A/4           		@B/4   						@W/4       		W/1	 		 DATA/8    	RST/1 				CLK/1   	  QA/8    	QB/8 always linked to C_DI_EX
registers_bench : di port map (B_BUFF(3 downto 0),C_BUFF(3 downto 0),A_MEM_RE(3 downto 0), out_lc_re(0), 	B_MEM_RE, rst_processor, clk_processor, mux_di,  cdiex_buff );

--								A/8     B/8     Ctrl_alu/3     S/8   NOZC/4 never linked in graphics
alu : ex_alu port map(B_DI_EX, C_DI_EX,  out_lc_ex , mux_ex, open);

--                           addr/8  	IN/8        RW/1       RST/1          CLK/1      	OUT/8
data_memory : mem port map (mux_mem, B_EX_MEM, out_lc_mem(0), rst_processor, clk_processor, mux_re(7 downto 0));

--								in/8       out/3			clk/1
lc_ex: lc port map ( OP_DI_EX, out_lc_ex, clk_processor);

--									in/8     out/3			clk/1
lc_mem : lc port map ( OP_EX_MEM, out_lc_mem, clk_processor);

--								in/8      out/3		clk/1
lc_re : lc port map ( OP_MEM_RE, out_lc_re, clk_processor);

--														alea/1				 rst/1			clk/1				pc/8
inst_pointer : inst_pointer_ip port map (alea_processor, rst_processor, clk_processor,  inst_addr);

-- instanciation
out_processor <= B_MEM_RE;

processor: process
begin

	wait until clk_processor'event and clk_processor = '1';
	if rst_processor = '0' then
	
		---- Alea ----
		alea_processor <= '0';
		A_BUFF	<= "00000000";
		B_BUFF 	<= "00000000";
		OP_BUFF	<= "00000000";
		C_BUFF	<= "00000000";
	
		---- Interface LI/DI ----
		A_LI_DI 	<= "00000000";
		B_LI_DI 	<= "00000000";
		OP_LI_DI <= "00000000";
		C_LI_DI 	<= "00000000";

		---- Interface DI/EX ----
		A_DI_EX 	<= "00000000";
		B_DI_EX 	<= "00000000";
		C_DI_EX 	<= "00000000";
		OP_DI_EX <= "00000000";

		---- Interface EX/MEM ----
		A_EX_MEM 	<= "00000000";
		B_EX_MEM 	<= "00000000";
		OP_EX_MEM 	<= "00000000";

		---- Interface MEM/RE ----
		A_MEM_RE 	<= "00000000";
		B_MEM_RE 	<= "00000000";
		OP_MEM_RE 	<= "00000000";
		
		---- Replace mux ----
		mux_di <= "00000000";
		mux_ex <= "00000000";
		mux_mem <= "00000000";
		mux_re <= "00000000";
		
		---- IP ----
		alea_processor <= "00000000";
	
	else

		---- Interface LI/DI ----
		A_LI_DI <= li_di(23 downto 16);
		B_LI_DI <= li_di(15 downto 8);
		OP_LI_DI <= li_di(31 downto 24);
		C_LI_DI <= li_di(7 downto 0);
		
		--***************************************************************************************--
		-------------------------------- Positive Aleas Tests -------------------------------------
		
		--									DIV 0X04 not handled in our processor
		if (li_di(31 downto 24) = X"01" or li_di(31 downto 24) = X"02" or li_di(31 downto 24) = X"03") then
			if (OP_LI_DI = X"01" or OP_LI_DI = X"02" or OP_LI_DI = X"03") then
				if ((A_LI_DI = li_di(15 downto 8)) or (A_LI_DI = li_di(7 downto 0))) then
					alea_processor <= '1';
				
					A_BUFF <= A_LI_DI;
					B_BUFF <= B_LI_DI;
					C_BUFF <= C_LI_DI;
					OP_BUFF <= OP_LI_DI;
				end if;
			end if;
		end if;
			
			
		-------------------------------------------------------------------------------------------
		if (li_di(31 downto 24) = X"05" and OP_LI_DI = X"05" and A_LI_DI = li_di(15 downto 8)) then
			alea_processor <= '1';
			
			A_BUFF <= A_LI_DI;
			B_BUFF <= B_LI_DI;
			C_BUFF <= C_LI_DI;
			OP_BUFF <= OP_LI_DI;
		end if;
		-------------------------------------------------------------------------------------------
		
		--*****************************************************************************************
		if (li_di(31 downto 24) = X"05" and OP_LI_DI = X"06" and A_LI_DI = li_di(15 downto 8)) then
			alea_processor <= '1';
			
			A_BUFF <= A_LI_DI;
			B_BUFF <= B_LI_DI;
			C_BUFF <= C_LI_DI;
			OP_BUFF <= OP_LI_DI;
		end if;
		--*****************************************************************************************
		
		-------------------------------------------------------------------------------------------
		if (li_di(31 downto 24) = X"01" or  li_di(31 downto 24) = X"02" or li_di(31 downto 24) = X"03") then
			if (OP_LI_DI = X"06" and (A_LI_DI = li_di(15 downto 8) or A_LI_DI = li_di(7 downto 0))) then -- Alea AFC -> ADD
			
			
				alea_processor <= '1';
				
				A_BUFF <= A_LI_DI;
				B_BUFF <= B_LI_DI;
				C_BUFF <= C_LI_DI;
				OP_BUFF <= OP_LI_DI;
				
			end if;
		end if;
		-------------------------------------------------------------------------------------------
		
		--*****************************************************************************************
		if (li_di(31 downto 24) = X"01" or  li_di(31 downto 24) = X"02" or li_di(31 downto 24) = X"03") then
			if (OP_LI_DI = X"05" and (A_LI_DI = li_di(15 downto 8) or A_LI_DI = li_di(7 downto 0))) then -- Alea AFC -> ADD
			
				alea_processor <= '1';
				
				A_BUFF <= A_LI_DI;
				B_BUFF <= B_LI_DI;
				C_BUFF <= C_LI_DI;
				OP_BUFF <= OP_LI_DI;
				
			end if;
		end if;
		--*****************************************************************************************
		
		if (OP_LI_DI= X"01" or  OP_LI_DI = X"02" or OP_LI_DI = X"03") then
			if (li_di(31 downto 24) = X"05" and (A_LI_DI = li_di(15 downto 8))) then -- Alea AFC -> ADD
			
				alea_processor <= '1';
				
				A_BUFF <= A_LI_DI;
				B_BUFF <= B_LI_DI;
				C_BUFF <= C_LI_DI;
				OP_BUFF <= OP_LI_DI;
				
			end if;
		end if;
		-------------------------------- End Positive Aleas Tests -------------------------------------
		--***************************************************************************************--		
		
		---------------- NO ALEA --------------
		if (OP_LI_DI /= X"0A" and OP_DI_EX = X"0A" and OP_EX_MEM = X"0A" and OP_MEM_RE /= X"0A") then
			alea_processor <= '0';
		end if;
		---------------------------------------
		
		
		-------------- Test if Alea -----------
		if alea_processor = '1' then
			OP_BUFF <= "00001010"; -- inexistant OP meaning "there is alea", 1010 because it's xA(LEA)
		else ---------- No alea ----------
			A_BUFF <= A_LI_DI;
			B_BUFF <= B_LI_DI;
			C_BUFF <= C_LI_DI;
			OP_BUFF <= OP_LI_DI;
		end if;
		
		--------------- END ALEAS ---------------
		-----------------------------------------
	
		
		---- Interface DI/EX ----
		-- direct link
		A_DI_EX <= A_BUFF;
		OP_DI_EX <= OP_BUFF;
		C_DI_EX <= cdiex_buff ; -- cdiex_buff to be sur to not write into C_DI_EX
										-- when an alea is present
		---- Replace Mux module in DI ----
		-- 				AFC						LOAD
		if (OP_LI_DI = X"06" or OP_LI_DI = X"07") then
		--  B_BUFF to stream the good value depending on aleas
			B_DI_EX <= B_BUFF;
		else -- others operators, registers bench always write into QA thus into mux_di
			B_DI_EX <= mux_di;
		end if;
		
		-----------------------------------------
		--    Here Aleas are already handled   --
		-----------------------------------------
		
		
		---- Interface EX/MEM ----		
		-- direct link
		A_EX_MEM <= A_DI_EX;
		OP_EX_MEM <= OP_DI_EX;	
		---- Replace Mux module in EX ----
		--			 		AFC						COP					LOAD					STORE
		if (OP_DI_EX = X"06" or OP_DI_EX = X"05" or OP_DI_EX = X"07" or OP_DI_EX = X"08") then 
			B_EX_MEM <= B_DI_EX;
		else
			B_EX_MEM <= mux_ex;
		end if; 
		
		
		---- Interface MEM/RE ----
		-- direct link
		A_MEM_RE <= A_EX_MEM;
		OP_MEM_RE <= OP_EX_MEM;
		---- Replace Mux module in MEM and before RE ----
		--					STORE
		if (OP_EX_MEM = X"08") then
			mux_mem <= A_EX_MEM;
			B_MEM_RE <= B_EX_MEM;
		--						 LOAD
		elsif (OP_EX_MEM = X"07") then
			mux_mem <= B_EX_MEM;
			B_MEM_RE <= mux_re;
		else -- others operators
			B_MEM_RE <= B_EX_MEM;
		end if;
		
		
	end if;
end process;

end Behavioral;

-------------- Unused ---------------
-------------------------------------

--signal in_lc_ex : std_logic_vector (7 downto 0);
--signal in_lc_mem : std_logic_vector (7 downto 0);
--signal in_lc_re : std_logic_vector (7 downto 0);
--signal in_mux_di : std_logic_vector (15 downto 0);
--signal out_mux_di : std_logic_vector (7 downto 0);
--signal in_mux_ex : std_logic_vector (15 downto 0);
--signal out_mux_ex : std_logic_vector (7 downto 0);
--signal in_mux_mem : std_logic_vector (15 downto 0);
--signal out_mux_mem : std_logic_vector (7 downto 0);
--signal in_mux_re : std_logic_vector (15 downto 0);
--signal out_mux_re : std_logic_vector (7 downto 0);

--component mux Port (
--									  op_selection : in  STD_LOGIC_VECTOR (7 downto 0);
--									  entree : in  STD_LOGIC_VECTOR (15 downto 0);
--									  sortie_selectionnee : out  STD_LOGIC_VECTOR (7 downto 0));
--end component;

----								  		selec/8		entree/16   sortie/8
--muliplexer_di : mux port map (op_li_di,  in_mux_di,   out_mux_di);
--
----								  		selec/8		entree/16   sortie/8
--muliplexer_ex : mux port map (op_di_ex,  in_mux_ex,  out_mux_ex);
--
----								  		selec/8		 entree/16   sortie/8
--muliplexer_mem : mux port map (op_ex_mem, in_mux_mem, out_mux_mem);
--
----								  		selec/8		entree/16   sortie/8
--muliplexer_re : mux port map (op_ex_mem,  in_mux_re,  out_mux_re);


--signal C_MEM_RE : std_logic_vector ( 7 downto 0);
--signal C_EX_MEM : std_logic_vector ( 7 downto 0);
--signal clk : std_logic ;
--signal rst : std_logic ;
--signal rw : std_logic ;
--signal addr : std_logic_vector (7 downto 0);
--signal outmem : std_logic_vector (7 downto 0);
--signal nozc : std_logic_vector (3 downto 0);
--signal write_read : std_logic;
--signal ctrl_alu : std_logic_vector (2 downto 0);
--signal selec_mux_di : std_logic_vector (7 downto 0);
--signal inmem : std_logic_vector (7 downto 0);
--signal QA : STD_LOGIC_VECTOR( 7 downto 0);
--signal QB : STD_LOGIC_VECTOR( 7 downto 0);
--signal outALU : STD_LOGIC_VECTOR( 7 downto 0);
