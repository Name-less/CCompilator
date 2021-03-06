----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:54:51 04/28/2015 
-- Design Name: 
-- Module Name:    MEM - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MEM is

	generic( 
				WORD_SIZE : Integer := 8;
				ARRAY_SIZE : Integer := 16
	);

    Port ( addr : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           inMEM : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           outMEM : out  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0));
end MEM;

architecture Behavioral of MEM is

type memory is array (0 to ARRAY_SIZE-1) of std_logic_vector(WORD_SIZE-1 downto 0);
signal bench : memory;

begin



	mem : process
	begin
		wait until clk'event and clk = '1';

		if( rst = '0') then
			bench <= (others => "00000000");
			outMEM <= "00000000";
		elsif( rw = '1') then -- lecture  TODO
			outMEM <= bench(conv_integer(addr));
		elsif( rw = '0') then -- ecriture
			bench(conv_integer(addr)) <= inMEM; 
		end if;

end process;

	
end Behavioral;

