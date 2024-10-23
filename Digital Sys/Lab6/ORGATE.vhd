library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ORGATE is
port (
	X, Y: in std_logic;
	O: out std_logic
);
end ORGATE;

architecture MYARCH of ORGATE is
begin
O <= X OR Y;
end MYARCH;