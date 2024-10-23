library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity MUX is
port (
	I0, I1, S: in std_logic;
	Y: out std_logic
);
end MUX;



architecture MYARCH of MUX is

signal A, B, Snot: std_logic;

component ANDGATE is
port (
	X, Y: in std_logic;
	O: out std_logic
);
end component;

component ORGATE is
port (
	X, Y: in std_logic;
	O: out std_logic
);
end component;

component NOTGATE is
port (
	I: in std_logic;
	O: out std_logic
);
end component;

begin
	G_Not: NOTGATE port map (S, Snot);
	G1: ANDGATE port map (I0, Snot, A);
	G2: ANDGATE port map (I1, S, B);
	G3: ORGATE port map (A, B, Y);
end MYARCH;