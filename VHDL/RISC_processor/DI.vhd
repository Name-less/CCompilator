----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:52:27 04/28/2015 
-- Design Name: 
-- Module Name:    DI - Behavioral 
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

entity DI is
    Port ( addra : in  STD_LOGIC_VECTOR (3 downto 0);
           addrb : in  STD_LOGIC_VECTOR (3 downto 0);
           addrw : in  STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC; --read(0) or write(1)
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end DI;

architecture Behavioral of DI is

type memory is array ( 0 to 15 ) of std_logic_vector( 7 downto 0 ) ;
signal bench : memory;
--bench <= (others => "00000000");
signal Sigouta: std_logic_vector ( 7 downto 0);
signal Sigoutb: std_logic_vector ( 7 downto 0);
--signal Sigoutw: std_logic_vector ( 7 downto 0);

begin

process
	begin 
	
		bench <= (
				--test
				0 => "10000000" ,
				1 => "11000000" ,
				2 => "11100000" ,
				--fin des valeurs de test
				others => "00000000" );
				
		-- Reset and Writing synchron on clk
		wait until clk'event and clk='1';
			if (rst='0') then --reset inside memory <= 0x00
				bench <= (others => "00000000" );				
			elsif (w='1') then
				bench(conv_integer(unsigned(addrw))) <= data;
			end if;
	
end process;
	
	-- controle des aléas
	Sigouta <= 	data 												when ((w ='1') and (addrw = addra) and rst = '1') else
					bench(conv_integer(unsigned(addra)))	when (((addrw /= addra) or (addrw /= addrb)) and w='0' and rst='1');
	Sigoutb <= 	data 												when ((w ='1') and (addrw = addrb) and rst = '1') else 		
					bench(conv_integer(unsigned(addrb)))	when (((addrw /= addra) or (addrw /= addrb)) and w='0' and rst='1');
		
	
	qa<=Sigouta;
	qb<=Sigoutb;

end Behavioral;

