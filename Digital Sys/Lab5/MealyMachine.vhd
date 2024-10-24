library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 
entity mealy is
Port ( clk : in STD_LOGIC;
	din : in STD_LOGIC;
	rst : in STD_LOGIC;
	dout : out STD_LOGIC);
end mealy;
 
architecture Behavioral of mealy is
type state is (st0, st1, st2, st3);
signal present_state, next_state : state;
begin
 
-- This basically allows a reset switch.
-- If the reset is 1 then go back to state0, otherwise move on to calculate the next state.
syncronous_process : process (clk)
begin
	if rising_edge(clk) then
		if (rst = '1') then
			present_state <= st0;
		else
			present_state <= next_state;
		end if;
	end if;
end process;
 
-- This checks what the current state is, and the current input to decide the next state.
next_state_and_output_decoder : process(present_state, din)
begin
	dout <= '0'; 

case (present_state) is 
when st0 =>
	if (din = '1') then
		next_state <= st1;
		dout <= '0';
	else
		next_state <= st0;
		dout <= '0'; 
	end if; 

when St1 =>
	if (din = '1') then
		next_state <= st2;
		dout <= '0';
	else
		next_state <= st0;
		dout <= '0'; 
	end if; 

when St2 =>
	if (din = '1') then
		next_state <= st1;
		dout <= '0';
	else
		next_state <= st3;
		dout <= '0';
	end if; 

when St3 =>
	if (din = '1') then
		next_state <= st0;
		dout <= '1';
	else
		next_state <= st0;
		dout <= '0';
	end if; 


when others =>
	next_state <= st0;
	dout <= '0';
end case;
end process;
end Behavioral;