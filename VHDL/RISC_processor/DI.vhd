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

	generic(
			LITTLE_WORD_SIZE : Integer := 4;
			WORD_SIZE : Integer := 8;
			MEM_SIZE : Integer := 16
	);

    Port ( addra : in  STD_LOGIC_VECTOR (LITTLE_WORD_SIZE-1 downto 0);
           addrb : in  STD_LOGIC_VECTOR (LITTLE_WORD_SIZE-1 downto 0);
           addrw : in  STD_LOGIC_VECTOR (LITTLE_WORD_SIZE-1 downto 0);
           W : in  STD_LOGIC; --read(0) or write(1)
           DATA : in  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0);
           QB : out  STD_LOGIC_VECTOR (WORD_SIZE-1 downto 0));
end DI;

architecture Behavioral of DI is

type memory is array ( 0 to MEM_SIZE-1 ) of std_logic_vector( WORD_SIZE-1 downto 0 ) ;
signal bench : memory;
signal Sigouta: std_logic_vector ( WORD_SIZE-1 downto 0);
signal Sigoutb: std_logic_vector ( WORD_SIZE-1 downto 0);

begin

process
	begin 
	
		bench <= (
				--test
				0 => X"01" ,
				1 => X"DD" ,
				5 => X"BB",
				6 => X"EE",
				--fin des valeurs de test
				others => "00000000" );
				
		-- Reset and Writing synchron on clk
		wait until clk'event and clk='1';
			if (rst='0') then --reset inside memory <= 0x00
				bench <= (others => "00000000" );
				--Sigouta <= "00000000";
				--Sigoutb <= "00000000";
			elsif (w='0') then -- write!!!!! changed
				bench(conv_integer(addrw)) <= data;
			end if;
	
end process;
	
	-- controle des aleas
	Sigouta <= 	"00000000"						when (rst='0') else
					data 								when ((w ='0') and (addrw = addra) and rst = '1') else --alea
					bench(conv_integer(addra))	when (((addrw /= addra) or (addrw /= addrb)) and w='1' and rst='1');
	Sigoutb <= 	"00000000"						when (rst='0') else
					data 								when ((w ='0') and (addrw = addrb) and rst = '1') else --alea
					bench(conv_integer(addrb))	when (((addrw /= addra) or (addrw /= addrb)) and w='1' and rst='1');
		
	
	qa<=Sigouta;
	qb<=Sigoutb;

end Behavioral;

