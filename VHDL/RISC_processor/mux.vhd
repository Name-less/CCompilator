----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:35:44 05/26/2015 
-- Design Name: 
-- Module Name:    mux - Behavioral 
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

entity mux is
    Port ( op_selection : in  std_logic_vector (7 downto 0);
           entree : in  STD_LOGIC_VECTOR (15 downto 0);
           sortie_selectionnee : out  STD_LOGIC_VECTOR (7 downto 0));
end mux;

architecture Behavioral of mux is

begin

					sortie_selectionnee 	<= entree(7 downto 0) when op_selection = X"05" else --COP 0x05
													entree(15 downto 8) when op_selection = X"06" or op_selection = X"07" else --AFC 0x06
													entree
													"00000000";

end Behavioral;

