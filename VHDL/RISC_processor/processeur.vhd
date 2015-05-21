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

begin

signal A <= li_di(23 downto 16);
signal B <= li_di(15 downto 8);
signal OP <= li_di(31 downto 24);
signal C <= li_di(7 downto 0);

LI : instructions_memory port map ( ,li_di,clk);
-- OP a verifier quand on passe dans LC...
DI : registers_bench port map (B,%,A,LC(OP),B,clk,%,%);



end Behavioral;

