

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fuel_detector_tb is
end fuel_detector_tb;

architecture Behavioral of fuel_detector_tb is

    -- Component Declaration
    component fuel_detector is
        Port ( fuel : in std_logic_vector(3 downto 0);
               leds : out std_logic_vector(3 downto 0));
    end component;

    -- Signals to connect to the UUT (Unit Under Test)
    signal fuel_sig : std_logic_vector(3 downto 0);
    signal leds_sig : std_logic_vector(3 downto 0);

    -- Define the number of test cases
    constant N: integer := 16;

    -- Define array types
    type slv_array is array(0 to N-1) of std_logic_vector(3 downto 0);

    -- Initialize the test input array
    constant fuel_array: slv_array := (
        "0000", "0001", "0010", "0011",
        "0100", "0101", "0110", "0111",
        "1000", "1001", "1010", "1011",
        "1100", "1101", "1110", "1111"
    );

    -- Initialize the expected output array
    constant led_array: slv_array := (
        "1111", -- fuel = "0000"
        "1110", -- fuel = "0001"
        "1110", -- fuel = "0010"
        "1100", -- fuel = "0011"
        "1100", -- fuel = "0100"
        "1100", -- fuel = "0101"
        "1100", -- fuel = "0110"
        "1000", -- fuel = "0111"
        "1000", -- fuel = "1000"
        "1000", -- fuel = "1001"
        "1000", -- fuel = "1010"
        "1000", -- fuel = "1011"
        "1000", -- fuel = "1100"
        "1000", -- fuel = "1101"
        "1000", -- fuel = "1110"
        "0000"  -- fuel = "1111"
    );

    -- Function to convert std_logic_vector to string
    function slv_to_string(slv : std_logic_vector) return string is
        variable result : string(1 to slv'length);
    begin
        for i in slv'range loop
            result(i - slv'left + 1) := character'VALUE(std_ulogic'IMAGE(slv(i)));
        end loop;
        return result;
    end function;

begin

    -- Instantiate the UUT
    UUT: fuel_detector port map (
        fuel => fuel_sig,
        leds => leds_sig
    );

    -- Test Process
    stim_proc: process
    begin
        for i in 0 to N-1 loop
            -- Apply the input
            fuel_sig <= fuel_array(i);
            wait for 10 ns; -- Allow time for the UUT to process

            -- Compare the output
            if leds_sig /= led_array(i) then
                report "Test failed for input " & slv_to_string(fuel_array(i)) &
                       ". Expected: " & slv_to_string(led_array(i)) &
                       ", Got: " & slv_to_string(leds_sig)
                       severity error;
            else
                report "Test passed for input " & slv_to_string(fuel_array(i))
                       severity note;
            end if;
        end loop;

        wait; -- Wait indefinitely after testing is complete
    end process;

end Behavioral;