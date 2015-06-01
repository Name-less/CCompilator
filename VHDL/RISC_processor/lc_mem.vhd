----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:07:25 05/26/2015 
-- Design Name: 
-- Module Name:    lc_mem - Behavioral 
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

entity lc_mem is

	Generic (size_out : natural := 3);

    Port ( entree_lc_mem : in std_logic_vector (7 downto 0);
           sortie_lc_mem : out  STD_LOGIC_VECTOR (size_out-1 downto 0);
			  rst : in std_logic;
			  clk : in std_logic -- à virer peut être
			  );
end lc_mem;

architecture Behavioral of lc_mem is

begin

	process
		begin

		wait until clk'event and clk='1';
		
		--							STORE 0x08 Write				ALEA 0x0A
		if ( rst = '0' or entree_lc_mem = "00001000" or entree_lc_mem = "00001010") then
			sortie_lc_mem <= "000";
		-- for ctrl_alu       SUM      +               MUL       +                 SUB
		elsif (entree_lc_mem = "00000001" or entree_lc_mem = "00000010" or entree_lc_mem = "00000011") then 
			sortie_lc_mem <= entree_lc_mem(2 downto 0);
		else -- sortie = Read
			sortie_lc_mem <= "001";				 
		end if;
		
	end process;

end Behavioral;

