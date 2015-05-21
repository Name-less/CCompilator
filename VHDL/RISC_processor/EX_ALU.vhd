----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:49:37 04/28/2015 
-- Design Name: 
-- Module Name:    EX_ALU - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity EX_ALU is
	generic( WORD_SIZE : Integer := 8,
		CTRL_SIZE : Integer := 3,
		LITTLE_WORD_SIZE : Integer := 4,
		TEMP_SIZE : Integer := 16);

    Port ( A : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           B : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (CTRL_SIZE-1 downto 0); --operation
           S : out  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0); --result
           NOZC : out  STD_LOGIC_VECTOR (LITTLE_WORD_SIZE-1 downto 0));
end EX_ALU;

	--http://en.wikibooks.org/wiki/Category:VHDL_for_FPGA_Design
	
architecture Behavioral of EX_ALU is

    signal temp : std_logic_vector (TEMP_SIZE-1 downto 0); --16 bits

begin

	-- pas de process car non-cyclique (pas d'horloge)
	-- => pas de if or d'un process
	
	--NOZC <= "0000";
	
		-- 0x01 <=> SUM S=A+B
		temp <= 	("00000000" & A) + B when Ctrl_Alu = "001" else
		-- 0x02 <=> MUL S=A*B
					A * B 					when Ctrl_Alu = "010" else
		-- 0x03 <=> SUB S=A-B
					("00000000" & A) - B when Ctrl_Alu = "011" else
		-- 0x04 <=> DIV S=A/B non implemented
		-- XxXX <=> none
					"0000000000000000";
					
	-- Carry: attribution of the flag carry
	NOZC(0) <= 	temp(WORD_SIZE) when Ctrl_Alu = "001" or Ctrl_Alu = "011" else
		-- à tester la mul
					'1' 	  when Ctrl_Alu = "010" and temp(TEMP_SIZE-1 downto WORD_SIZE) /= "00000000" else
					'0';
	
	-- Zero: attribution of the flag zero (trivial)
	NOZC(1) <= 	'1' when temp(WORD_SIZE-1 downto 0) = "00000000" else
					'0';
					
	-- Overflow: attribution of the flag overflow
					-- overflow for add
	NOZC(2) <=	'1' when Ctrl_Alu = "001" and temp(WORD_SIZE-1) = '0' and A(WORD_SIZE-1) = '1' and B(WORD_SIZE-1) = '1' else --unsigned
					'1' when Ctrl_Alu = "001" and temp(WORD_SIZE-1) = '1' and A(WORD_SIZE-1) = '0' and B(WORD_SIZE-1) = '0' else --signed
					'0' when Ctrl_Alu = "001" else
					-- overflow for mul
					-- example multiplication  http://patentimages.storage.googleapis.com/EP0428942A2/imgb0001.png
					--									http://www.google.com/patents/EP0428942A2?cl=en
					'1' when Ctrl_Alu = "010" and temp(WORD_SIZE-1) = '1' and A(WORD_SIZE-1) = '1' and B(WORD_SIZE-1) = '1' else
					'1' when Ctrl_Alu = "010" and temp(WORD_SIZE-1) = '1' and A(WORD_SIZE-1) = '0' and B(WORD_SIZE-1) = '0' else
					'1' when Ctrl_Alu = "010" and temp(WORD_SIZE-1) = '0' and A(WORD_SIZE-1) = '0' and B(WORD_SIZE-1) = '1' else
					'1' when Ctrl_Alu = "010" and temp(WORD_SIZE-1) = '1' and A(WORD_SIZE-1) = '1' and B(WORD_SIZE-1) = '0' else
					'0' when Ctrl_Alu = "010" else
					-- overflow for sub
					'1' when Ctrl_Alu = "011" and temp(WORD_SIZE-1) = '1' and A(WORD_SIZE-1) = '0' and B(WORD_SIZE-1) = '1' else
					'1' when Ctrl_Alu = "011" and temp(WORD_SIZE-1) = '0' and A(WORD_SIZE-1) = '1' and B(WORD_SIZE-1) = '0' else
					'0' when Ctrl_Alu = "011" else
					'0'; -- this case to complete all cases
	
	
	-- Negative: attribution of the flag negative (trivial)
	NOZC(3) <= temp(WORD_SIZE-1);
	
	
	-- Final
	S <= temp(WORD_SIZE-1 downto 0);
	
	

end Behavioral;

