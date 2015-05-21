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
    Port ( addr : in  STD_LOGIC_VECTOR (7 downto 0);
           outLI : out  STD_LOGIC_VECTOR (31 downto 0);
           CLK : in  STD_LOGIC);
end LI;

architecture Behavioral of LI is

type memory is array ( 0 to 20 ) of std_logic_vector( 31 downto 0 ) ; 
--256 instructions max because 8 bits addr						32bits for 4 registers
--here we choose 20 for a test
signal mem : memory ;

begin

	rom : process
	begin
	
		wait until clk'event and clk = '1';

		outLI <= mem(conv_integer(unsigned(addr)));

end process;
			



end Behavioral;

