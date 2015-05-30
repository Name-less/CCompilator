--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:20:35 05/30/2015
-- Design Name:   
-- Module Name:   C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/test_IP.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: inst_pointer_IP
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
 
ENTITY test_IP IS
END test_IP;
 
ARCHITECTURE behavior OF test_IP IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT inst_pointer_IP
    PORT(
         alea : IN  std_logic;
         rst : IN  std_logic;
         clk : IN  std_logic;
         pc : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal alea : std_logic := '0';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal pc : std_logic_vector(7 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: inst_pointer_IP PORT MAP (
          alea => alea,
          rst => rst,
          clk => clk,
          pc => pc
        );

   -- Clock process definitions
   clk <= not clk after 50 ns;

   -- Stimulus process
	rst <= '0', '1' after 100 ns, '0' after 300 ns;
	alea <= '0', '1' after 200 ns, '0' after 500 ns; 
 
 

END;
