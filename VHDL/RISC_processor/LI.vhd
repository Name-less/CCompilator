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

type memory is array ( 0 to 15 ) of std_logic_vector( 31 downto 0 ) ;
constant rom : memory := (
2 => "11111111111111111111111111111111" ,
3 => "11010101110101011101010111010101" , 
4 => "01101000011010000110100001101000" , 
6 => "10011011100110111001101110011011" , 
8 => "01101101011011010110110101101101" , 
9 => "00110111001101110011011100110111" , 
others => "00000000000000000000000000000000" ) ;

begin
process
begin

		wait until clk'event and clk='1';
			


end process;

end Behavioral;

