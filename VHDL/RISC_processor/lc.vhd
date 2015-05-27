----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:07:25 05/26/2015 
-- Design Name: 
-- Module Name:    lc - Behavioral 
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

entity lc is
    Port ( entree_lc : in std_logic_vector (7 downto 0);
           sortie_lc : out  STD_LOGIC);
end lc;

architecture Behavioral of lc is

begin

						sortie_lc  <=	'0' when entree_lc = "00001000" else --STORE 0x08
											'1';

end Behavioral;

