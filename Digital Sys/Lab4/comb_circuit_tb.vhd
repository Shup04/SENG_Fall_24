
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity comb_circuit_tb is
end comb_circuit_tb;

architecture Behavioral of comb_circuit_tb is
    component comb_circuit
        Port (
            inputs : in std_logic_vector(5 downto 0);
            output_signal : out std_logic
        );
    end component;

    signal inputs : std_logic_vector(5 downto 0) := (others => '0'); 
    signal output_signal : std_logic;

    signal expected_output : std_logic;

begin

    uut: comb_circuit
        Port map (
            inputs => inputs,
            output_signal => output_signal
        );

    stim_proc: process
    begin
        -- Loop through each combination
        for i in 0 to 63 loop
            inputs <= std_logic_vector(to_unsigned(i, 6));
            wait for 10 ns;

            if i = 1 or i = 5 or i = 33 then
                expected_output <= '0';
            else
                expected_output <= '1';
            end if;a

            if output_signal /= expected_output then
                report "Test failed for inputs = " & integer'image(i)
                       severity error;
            else
                report "Test passed for inputs = " & integer'image(i)
                       severity note;
            end if;
        end loop;

        wait;
    end process;

end Behavioral;
