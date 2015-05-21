--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:19:37 05/11/2015
-- Design Name:   
-- Module Name:   /home/laloy/CCompilator/VHDL/RISC_processor/Register_bench_test.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DI
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
 
ENTITY Register_bench_test IS
END Register_bench_test;
 
ARCHITECTURE behavior OF Register_bench_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DI
    PORT(
         addra : IN  std_logic_vector(3 downto 0);
         addrb : IN  std_logic_vector(3 downto 0);
         addrw : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(7 downto 0);
         QB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal addra : std_logic_vector(3 downto 0) := (others => '0');
   signal addrb : std_logic_vector(3 downto 0) := (others => '0');
   signal addrw : std_logic_vector(3 downto 0) := (others => '0');
   signal W : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal QA : std_logic_vector(7 downto 0);
   signal QB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DI PORT MAP (
          addra => addra,
          addrb => addrb,
          addrw => addrw,
          W => W,
          DATA => DATA,
          RST => RST,
          CLK => CLK,
          QA => QA,
          QB => QB
        );

	-- clock process
	clk<= not clk after 5 ns;

   -- Stimulus process
   	
		rst <= '0', '1' after 200 ns , '0' after 700 ns, '1' after 760 ns ;
		w <= '0', '1' after 300 ns, '0' after 500 ns, '1' after 750 ns;
		addra <= "0000";  --qa <= addra entre 200ns et 700ns		
		addrb <= "0001"; 	--qb <= addrb 
		addrw <= "0011", "0001" after 700 ns, "0000" after 800 ns;
		data <= "11110111";
		
      
END;
