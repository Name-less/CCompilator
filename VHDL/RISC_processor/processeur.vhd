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

-- ports externes pour le processeurs
entity processeur is
	Port ( 
			clk_processor : in std_logic;
			rst_processor : in std_logic;
			out_processor : out std_logic_vector (7 downto 0)
	);
end processeur;

architecture Behavioral of processeur is

-- chacun de nos components qui sont nos modules

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
									  outLI : out  STD_LOGIC_VECTOR (31 downto 0);
									  CLK : in  STD_LOGIC);
end component;

component mux Port (
									  op_selection : in  STD_LOGIC_VECTOR (7 downto 0);
									  entree : in  STD_LOGIC_VECTOR (15 downto 0);
									  sortie_selectionnee : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component lc Port (
						entree_lc : in std_logic_vector (7 downto 0);
						sortie_lc : out  STD_LOGIC);
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
signal in_mux_di : std_logic_vector (15 downto 0);
signal out_mux_di : std_logic_vector (7 downto 0);
signal in_mux_ex : std_logic_vector (15 downto 0);
signal out_mux_ex : std_logic_vector (7 downto 0);
signal in_mux_mem : std_logic_vector (15 downto 0);
signal out_mux_mem : std_logic_vector (7 downto 0);
signal in_mux_re : std_logic_vector (15 downto 0);
signal out_mux_re : std_logic_vector (7 downto 0);

----------------- LC ----------------
signal in_lc_di : std_logic_vector (7 downto 0);
signal out_lc_di : std_logic;
signal in_lc_ex : std_logic_vector (7 downto 0);
signal out_lc_ex : std_logic;
signal in_lc_re : std_logic_vector (7 downto 0);
signal out_lc_re : std_logic;

-------------- Unused ---------------
-------------------------------------
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

------------- Fin des signaux ---------------------
---------------------------------------------------

begin

--												in/8   	out/32     clk
instruction_memory : li port map (inst_addr, li_di, clk_processor);

--											     @A/4           		@B/4   						@W/4       		W/1	  DATA/8    RST/1 				CLK/1   		      QA/8            QB/8 always linked to C_DI_EX
registers_bench : di port map (B_LI_DI(3 downto 0),C_LI_DI(3 downto 0),A_MEM_RE(3 downto 0), out_lc, 	B_MEM_RE, rst_processor, clk_processor, in_mux_di(7 downto 0),  C_DI_EX);

--								A/8     B/8     Ctrl_alu/3           S/8   	       NOZC/4 never linked in graphics
alu : ex_alu port map(B_DI_EX, C_DI_EX,  out_lc_ex , in_mux_ex(7 downto 0), open);

--                          	addr/8  		 IN/8        RW/1       RST/1          CLK/1      	  OUT/8
data_memory : mem port map (out_mux_mem, B_EX_MEM, out_lc_mem, rst_processor, clk_processor, in_mux_re(7 downto 0));

--								  		selec/8		entree/16   sortie/8
muliplexer_di : mux port map (op_li_di,  in_mux_di,   out_mux_di);

--								  		selec/8		entree/16   sortie/8
muliplexer_ex : mux port map (op_di_ex,  in_mux_ex,  out_mux_ex);

--								  		selec/8		 entree/16   sortie/8
muliplexer_mem : mux port map (op_ex_mem, in_mux_mem, out_mux_mem);

--								  		selec/8		entree/16   sortie/8
muliplexer_re : mux port map (op_ex_mem,  in_mux_re,  out_mux_re);

--								in/8    out/1
lc_ex: lc port map ( in_lc_ex, out_lc_ex);

--									in/8     out/1
lc_mem : lc port map ( in_lc_mem, out_lc_mem);

--								in/8      out/1
lc_re : lc port map ( in_lc_re, out_lc_re);

processor: process
begin

	wait until clk_processor'event and clk_processor = '1';
	if rst_processor = '0' then
	
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
	
	else

		---- Interface LI/DI ----
		A_LI_DI <= li_di(23 downto 16);
		B_LI_DI <= li_di(15 downto 8);
		OP_LI_DI <= li_di(31 downto 24);
		C_LI_DI <= li_di(7 downto 0);
		
		---- Interface DI/EX ----
		A_DI_EX <= A_LI_DI;
		OP_DI_EX <= OP_LI_DI;
		

		-- multiplexer
		--op_li_di <= selec_mux_di;
		--in_mux_di <= (B_LI_DI & QA); 
		-----------------------------

		

		-- interface EX/MEM
		--A_EX_MEM <= A_DI_EX;
		--B_EX_MEM <= --MUX(B_DI_EX,outALU);
		--OP_EX_MEM <= OP_DI_EX;

		-- interface MEM/RE
		--A_MEM_RE <= A_EX_MEM;
		--B_MEM_RE <= B_EX_MEM;
		--OP_MEM_RE <= OP_EX_MEM;
		
	end if;
end process;

end Behavioral;

