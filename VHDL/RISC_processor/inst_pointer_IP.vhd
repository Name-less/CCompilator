----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:06:54 05/28/2015 
-- Design Name: 
-- Module Name:    inst_pointer_IP - Behavioral 
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

entity inst_pointer_IP is
    Port ( alea : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           pc : out  STD_LOGIC_VECTOR (7 downto 0));
end inst_pointer_IP;

architecture Behavioral of inst_pointer_IP is

signal counter : std_logic_vector (7 downto 0);

begin

	pc <= counter;
	
	process 
	
		begin
			
			wait until clk'event and clk='1';
			
			-- reset the counter    x13 = 19 =  "00010011" if counter at the bottom of stack we loop
			if rst='0' or counter = X"13" then
				counter <= "00000000";
			-- increase the instruction pointer
			elsif alea = '0' then
				counter <= counter +1;
			end if;
			
		end process;	
	
end Behavioral;

