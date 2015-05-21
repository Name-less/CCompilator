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

entity processeur is
end processeur;

architecture Behavioral of processeur is

-- chacun de nos components qui sont nos modules

component alu PORT(
									  A : in  STD_LOGIC_VECTOR (7 downto 0);
									  B : in  STD_LOGIC_VECTOR (7 downto 0);
									  Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0); --operation
									  S : out  STD_LOGIC_VECTOR (7 downto 0); --result
									  NOZC : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

component registers_bench Port( 
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

component data_memory Port(
									  addr : in  STD_LOGIC_VECTOR (7 downto 0);
									  inMEM : in  STD_LOGIC_VECTOR (7 downto 0);
									  RW : in  STD_LOGIC;
									  RST : in  STD_LOGIC;
									  CLK : in  STD_LOGIC;
									  outMEM : out  STD_LOGIC_VECTOR (7 downto 0));
end component;
									  
component instructions_memory Port(
									  addr : in  STD_LOGIC_VECTOR (7 downto 0);
									  outLI : out  STD_LOGIC_VECTOR (31 downto 0);
									  CLK : in  STD_LOGIC);
end component;

signal li_di std_logic_vector(31 downto 0);

signal A std_logic_vector(7 downto 0);
signal B std_logic_vector(7 downto 0);
signal C std_logic_vector(7 downto 0);
signal OP std_logic_vector(7 downto 0);

procedure LC(COP std_logic_vector(7 downto 0))

begin

	if(COP = '0x08') then
		return 0;
	else
		return 1;
	end if;

end LC;

procedure MUX(B std_logic_vector(7 downto 0);QA std_logic_vector(7 downto 0))

begin

-- Savoir quand retourner quoi
return QA;

end MUX;

signal QA STD_LOGIC_VECTOR( 7 downto 0);
signal QB STD_LOGIC_VECTOR( 7 downto 0);
signal outALU STD_LOGIC_VECTOR( 7 downto 0);

begin

signal A_LI_DI <= li_di(23 downto 16);
signal B_LI_DI <= li_di(15 downto 8);
signal OP_LI_DI <= li_di(31 downto 24);
signal C_LI_DI <= li_di(7 downto 0);

signal A_DI_EX <= A_LI_DI;
signal B_DI_EX <= MUX(B_LI_DI,QA);
signal C_DI_EX <= QB;
signal OP_DI_EX <= OP_LI_DI;

signal A_EX_MEM <= A_DI_EX;
signal B_EX_MEM <= MUX(B_DI_EX,outALU);
signal C_EX_MEM <= C_DI_EX;
signal OP_EX_MEM <= OP_DI_EX;

signal A_MEM_RE <= A_EX_MEM;
signal B_MEM_RE <= B_EX_MEM;
signal C_MEM_RE <= C_EX_MEM;
signal OP_MEM_RE <= OP_EX_MEM;

LI : instructions_memory port map ( ,li_di,clk);
-- OP a verifier quand on passe dans LC...
-- Attention, il attend du 3 downto 0 et on lui file du 7 downto 0 en premiers arguments
DI : registers_bench port map (B_LI_DI,C_LI_DI,A_MEM_RE,LC(OP_MEM_RE),B_MEM_RE,clk,QA,QB);
ALU_INST : alu port map(B_DI_EX,C_DI_EX,LC(OP_DI_EX),outALU);


end Behavioral;

