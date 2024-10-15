
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mealy_tb is
end mealy_tb;

architecture Behavioral of mealy_tb is
    -- Component declaration for the Unit Under Test (UUT)
    component mealy
        Port ( clk : in STD_LOGIC;
               din : in STD_LOGIC;
               rst : in STD_LOGIC;
               dout : out STD_LOGIC );
    end component;

    -- Testbench signals
    signal clk : STD_LOGIC := '0';
    signal din : STD_LOGIC := '0';
    signal rst : STD_LOGIC := '0';
    signal dout : STD_LOGIC;

    -- Clock period definition
    constant clk_period : time := 10 ns;

begin
    -- Instantiate the Unit Under Test (UUT)
    uut: mealy Port map (
        clk => clk,
        din => din,
        rst => rst,
        dout => dout
    );

    -- Clock process definitions
    clk_process :process
    begin
        clk <= '0';
        wait for clk_period/2;
        clk <= '1';
        wait for clk_period/2;
    end process;

    -- Stimulus process
stimulus_process: process
begin
    -- Reset the machine initially
    rst <= '1';
    wait for clk_period;
    rst <= '0';
    wait for clk_period;

    -- Apply the sequence "1101"
    din <= '1';
    wait for clk_period;
    
    din <= '1';
    wait for clk_period;
    
    din <= '0';
    wait for clk_period;
    
    din <= '1';
    wait for clk_period;

    -- Wait to observe the output for this sequence
    wait for clk_period;

    -- You can continue with other test sequences here if needed
    -- For example, applying some random inputs to see how the machine responds:
    
    din <= '0';
    wait for clk_period;
    
    din <= '1';
    wait for clk_period;
    
    din <= '0';
    wait for clk_period;
    
    din <= '1';
    wait for clk_period;

    -- Continue this way or stop the simulation after the initial sequence
    wait;
end process;


end Behavioral;
