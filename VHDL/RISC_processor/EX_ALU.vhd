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
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0);
           NOZC : out  STD_LOGIC_VECTOR (3 downto 0));
end EX_ALU;

architecture Behavioral of EX_ALU is
   signal temp : unsigned(8 downto 0); 
	--MAKE THE OPERATION BETWEEN A AND B

begin
	--http://en.wikibooks.org/wiki/Category:VHDL_for_FPGA_Design
	NOZC <= '0000';
	if(Ctrl_Alu = '00'){--SUM
		temp <= ("0" & A) + B; 
		S <= temp(7 downto 0); 
		NOZC(0)<= temp(8);	
	}elsif(Ctrl_Alu = '01'){--SUB
		temp <= ("0" & A) - B; 
		S <= temp(7 downto 0); 
		NOZC(0)<= temp(8);
	}elsif(Ctrl_Alu = '11'){--DIV
	
	}elsif(Ctrl_Alu = '10'){--MUL
	
	}

end Behavioral;

