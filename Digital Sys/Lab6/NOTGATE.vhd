library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity NOTGATE is
port (
	I: in std_logic;
	O: out std_logic
);
end NOTGATE;

architecture MYARCH of NOTGATE is
begin
O <= NOT I;
end MYARCH;