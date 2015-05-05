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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity EX_ALU is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0); --operation
           S : out  STD_LOGIC_VECTOR (7 downto 0); --result
           NOZC : out  STD_LOGIC_VECTOR (3 downto 0));
end EX_ALU;

	--http://en.wikibooks.org/wiki/Category:VHDL_for_FPGA_Design
	
architecture Behavioral of EX_ALU is

   signal temp : std_logic_vector (8 downto 0); --9 bits 
	--MAKE THE OPERATION BETWEEN A AND B

begin

	process (A,B, Ctrl_ALu, temp) is
	begin
	NOZC <= "0000";
	if(Ctrl_Alu = "001") then -- 0x01 <=> SUM S=A+B, C carry/ O overflow si A+B>8bits
		temp <= std_logic_vector((unsigned('0' & A) + unsigned(B))); 
		S <= temp(7 downto 0); 
		NOZC(0) <= temp(8); --attribution of the flag carry
		NOZC(2) <= temp(8); --attribution of the flag overflow 
	elsif(Ctrl_Alu = "010")then-- 0x02 <=> MUL
		temp <= A and B;
		S <= temp(7 downto 0);
		NOZC(0) <= temp(8); --attribution of the flag carry
		NOZC(2) <= temp(8); --attribution of the flag overflow
	elsif(Ctrl_Alu = "011") then-- 0x03 <=> SUB S=|A-B|, N Negative si B>A
		if (A>=B) then
			S <= std_logic_vector(unsigned(A) - unsigned(B)); -- no flag
		else
			S <= std_logic_vector(unsigned(B) - unsigned(A));
			NOZC(3) <= '1'; -- attribution of the flag negative
		end if;
	--elsif(Ctrl_Alu = "100") then -- 0x04 <=> DIV
	end if;
	end process;

end Behavioral;

