library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ANDGATE is
port (
	X, Y: in std_logic;
	O: out std_logic
);
end ANDGATE;

architecture MYARCH of ANDGATE is
begin
O <= X AND Y;
end MYARCH;