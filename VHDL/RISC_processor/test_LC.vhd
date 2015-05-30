--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:41:12 05/30/2015
-- Design Name:   
-- Module Name:   C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/test_LC.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lc
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_LC IS
END test_LC;
 
ARCHITECTURE behavior OF test_LC IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lc
    PORT(
         entree_lc : IN  std_logic_vector(7 downto 0);
         sortie_lc : OUT  std_logic_vector(2 downto 0);
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal entree_lc : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal sortie_lc : std_logic_vector(2 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lc PORT MAP (
          entree_lc => entree_lc,
          sortie_lc => sortie_lc,
          clk => clk
        );
 
	clk<= not clk after 50 ns;
 
   -- Stimulus process
	--					0x08			0x0A								ADD							MUL							SUB							
	entree_lc <= "00001000", "00001010" after 200 ns, "00000001" after 400 ns, "00000010" after 600 ns, "00000011" after 800 ns, "00000101" after 1000 ns;
   

END;
