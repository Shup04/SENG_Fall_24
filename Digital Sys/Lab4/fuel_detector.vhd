
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity fuel_detector is
Port ( fuel : in std_logic_vector(3 downto 0);
leds : out std_logic_vector(3 downto 0));
end fuel_detector;
architecture Behavioral of fuel_detector is
begin
leds(0) <= '1' when (fuel < "0001") else '0';
leds(1) <= '1' when (fuel < "0011") else '0';
leds(2) <= '1' when (fuel < "0111") else '0';
leds(3) <= '1' when (fuel < "1111") else '0';
end Behavioral;