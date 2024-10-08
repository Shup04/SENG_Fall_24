library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL; 

entity fuel_detector_tb is

end fuel_detector_tb;

architecture Behavioral of fuel_detector_tb is

    component fuel_detector
        Port (
            fuel : in std_logic_vector(3 downto 0);
            leds : out std_logic_vector(3 downto 0)
        );
    end component;

    signal fuel : std_logic_vector(3 downto 0) := (others => '0');  -- Initialize to 0
    signal leds : std_logic_vector(3 downto 0);  

    type lookup_table_type is array (0 to 15) of std_logic_vector(3 downto 0);

    -- Lookup table
    constant expected_leds : lookup_table_type := (
        -- Expected values for each fuel level from 0 to 15
        "1111", 
        "0111", 
        "0111", 
        "0011", 
        "0011", 
        "0011", 
        "0011", 
        "0001", 
        "0001", 
        "0001", 
        "0001", 
        "0001", 
        "0001", 
        "0001", 
        "0001", 
        "0000"  
    );

begin

    uut: fuel_detector
        Port map (
            fuel => fuel,
            leds => leds
        );

    -- Test process
    stim_proc: process
    begin
        -- Loop through all possible 4-bit fuel values (0 to 15)
        for i in 0 to 15 loop
            fuel <= std_logic_vector(to_unsigned(i, 4));
            
            wait for 10 ns;  

            if leds /= expected_leds(i) then
                
                report "Test failed for fuel = " & integer'image(i)
                       severity error;
            else
               
                report "Test passed for fuel = " & integer'image(i)
                       severity note;
            end if;
        end loop;

        wait;
    end process;

end Behavioral;