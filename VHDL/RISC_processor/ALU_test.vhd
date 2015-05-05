--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:27:11 05/05/2015
-- Design Name:   
-- Module Name:   /home/laloy/CCompilator/VHDL/RISC_processor/ALU_test.vhd
-- Project Name:  RISC_processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: EX_ALU
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
 
ENTITY ALU_test IS
END ALU_test;
 
ARCHITECTURE behavior OF ALU_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT EX_ALU
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Ctrl_Alu : IN  std_logic_vector(2 downto 0);
         S : OUT  std_logic_vector(7 downto 0);
         NOZC : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(7 downto 0) := (others => '0');
   signal B : std_logic_vector(7 downto 0) := (others => '0');
   signal Ctrl_Alu : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic_vector(7 downto 0);
   signal NOZC : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
    
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: EX_ALU PORT MAP (
          A => A,
          B => B,
          Ctrl_Alu => Ctrl_Alu,
          S => S,
          NOZC => NOZC
        );

   -- Clock process
		--ck<= not ck after 0.5 ns;

   -- Stimulus process
		B <= "00000000", "00001010" after 100 ns; -- 10
		A <= "00000000", "11111100" after 100 ns; -- 
		Ctrl_Alu <= "000", "001" after 100 ns, "011" after 200 ns, "010" after 300 ns; --ADD SUB MUL
END;
