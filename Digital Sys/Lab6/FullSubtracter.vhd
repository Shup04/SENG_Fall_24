library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity fullSubtracter is
Port (
	A, B, Bin: in STD_LOGIC;
	Diff, Bout: out STD_LOGIC
);
end fullSubtracter;

architecture myArch of fullSubtracter is
begin
	Diff <= (A XOR B) XOR Bin;
	Bout <= ((Bin AND NOT(A XOR B)) OR (NOT A AND B));
end myArch;