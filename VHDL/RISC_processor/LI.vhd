----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:25:39 04/28/2015 
-- Design Name: 
-- Module Name:    LI - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LI is
	generic(
				WORD_SIZE : Integer := 8;
				OUT_SIZE : Integer := 32;
				ARRAY_SIZE : Integer := 20
	);
    Port (  addr : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
				alea : in std_logic;
            outLI : out  STD_LOGIC_VECTOR (OUT_SIZE-1 downto 0);
            CLK : in  STD_LOGIC);
end LI;

architecture Behavioral of LI is

type memory is array ( 0 to ARRAY_SIZE-1 ) of std_logic_vector( OUT_SIZE-1 downto 0 ) ; 
--256 instructions max because 8 bits addr						32bits for 4 registers
--here we choose 20 for a test
signal mem : memory ;

begin

	mem <= (
		0 => X"01020100",	-- ADD R2 R1 R0
		1 => X"06000400", -- AFC R0 04
		2 => X"0605CC00", -- AFC R5 CC
		3 => X"05060500", -- COP R6 R5 ALEA
		others => X"00000000" );

	rom : process
	begin
	
		wait until clk'event and clk = '1';
		
		-- no alea
		if alea = '0' then
			outLI <= mem(conv_integer(addr));
		else
		-- there is aleas so we get the old instruction back
			outLI <= mem(conv_integer(addr-1));
		end if;
end process;
			



end Behavioral;

