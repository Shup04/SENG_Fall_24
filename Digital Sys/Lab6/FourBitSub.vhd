library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity fourBitSubtracter is
Port (
	A, B: in STD_LOGIC_VECTOR(3 downto 0); 
	Bin: in STD_LOGIC;
	Diff: out STD_LOGIC_VECTOR(3 downto 0);
	Bout: out STD_LOGIC
);
end fourBitSubtracter;

architecture myArch of fourBitSubtracter is

component fullSubtracter
Port (
	A, B, Bin: in STD_LOGIC;
	Diff, Bout: out STD_LOGIC
);
end component;

signal Bsig: STD_LOGIC_VECTOR(3 downto 0);

begin
	FS0: fullSubtracter port map (A(0), B(0), Bin, Diff(0), Bsig(0));
	FS1: fullSubtracter port map (A(1), B(1), Bsig(0), Diff(1), Bsig(1));
	FS2: fullSubtracter port map (A(2), B(2), Bsig(1), Diff(2), Bsig(2));
	FS3: fullSubtracter port map (A(3), B(3), Bsig(2), Diff(3), Bsig(3));
	Bout <= B(3);
end myArch;