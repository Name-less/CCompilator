--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:59:11 05/30/2015
-- Design Name:   
-- Module Name:   C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/test_processeur.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: processeur
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
 
ENTITY test_processeur IS
END test_processeur;
 
ARCHITECTURE behavior OF test_processeur IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT processeur
    PORT(
         clk_processor : IN  std_logic;
         rst_processor : IN  std_logic;
         out_processor : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_processor : std_logic := '0';
   signal rst_processor : std_logic := '0';

 	--Outputs
   signal out_processor : std_logic_vector(7 downto 0);

    
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: processeur PORT MAP (
          clk_processor => clk_processor,
          rst_processor => rst_processor,
          out_processor => out_processor
        );

   -- Clock process definitions
	clk_processor <=  not clk_processor after 50 ns;
 
   -- Stimulus process
	rst_processor <= '0', '1' after 200 ns;
  

END;
