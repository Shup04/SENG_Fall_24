
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity comb_circuit is
    Port (
        inputs : in std_logic_vector(5 downto 0);  
        output_signal : out std_logic  
    );
end comb_circuit;

architecture Behavioral of comb_circuit is
begin
    process(inputs)
    begin
        case to_integer(unsigned(inputs)) is
            when 1 | 5 | 33 =>
                output_signal <= '0';  
            when others =>
                output_signal <= '1';  
        end case;
    end process;
end Behavioral;