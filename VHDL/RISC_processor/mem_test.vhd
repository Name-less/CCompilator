--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:05:53 05/21/2015
-- Design Name:   
-- Module Name:   C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/mem_test.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MEM
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
 
ENTITY mem_test IS
END mem_test;
 
ARCHITECTURE behavior OF mem_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MEM
    PORT(
         addr : IN  std_logic_vector(7 downto 0);
         inMEM : IN  std_logic_vector(7 downto 0);
         RW : IN  std_logic;
         RST : IN  std_logic;
         CLK : IN  std_logic;
         outMEM : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal addr : std_logic_vector(7 downto 0) := (others => '0');
   signal inMEM : std_logic_vector(7 downto 0) := (others => '0');
   signal RW : std_logic := '0';
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal outMEM : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MEM PORT MAP (
          addr => addr,
          inMEM => inMEM,
          RW => RW,
          RST => RST,
          CLK => CLK,
          outMEM => outMEM
        );

   -- Clock process

		clk<= not clk after 50 ns;
		
		
	-- Stimulus process
	
			--ecriture			--lecture
	rw <= '0' after 100 ns, '1' after 200 ns;
	rst <= '0', '1' after 100 ns, '0' after 300 ns, '1' after 400 ns;
	addr <= "00000001" after 20 ns;
	inmem <= "11111110" after 20 ns;


END;
