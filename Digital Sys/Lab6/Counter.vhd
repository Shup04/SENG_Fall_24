LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

entity Counter is
port (
    clk : in std_logic;
    reset : in std_logic;
    Q : out std_logic_vector(3 downto 0)
);
end Counter;

architecture counterArch of Counter is
    signal count: unsigned(3 downto 0);
begin
    process(reset, clk)
    begin
        if (reset = '1') then
            count <= (others => '0');
        elsif rising_edge(clk) then
            count <= count + 1;
        end if;
    end process;

    Q <= std_logic_vector(count);
end counterArch;
