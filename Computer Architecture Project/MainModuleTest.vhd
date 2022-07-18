--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:44:13 05/02/2014
-- Design Name:   
-- Module Name:   D:/Work/2013-2014/2nd Term/Computer Architecture/Practical Exam/Lab exams 2014/Day1/A1/A1Template/MainModuleTest.vhd
-- Project Name:  A1Template
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MainModule
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY MainModuleTest IS
END MainModuleTest;
 
ARCHITECTURE behavior OF MainModuleTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MainModule
    PORT(
         ControlWord : IN  std_logic_vector(11 downto 0);
         ALUOut : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ControlWord : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal ALUOut : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MainModule PORT MAP (
          ControlWord => ControlWord,
          ALUOut => ALUOut
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      --wait for 10ns;

      -- insert stimulus here
		
		-- Test1
			wait for 10ns;
			ControlWord <= "100100010010" ;
			
			report "Test1";
			assert(ALUOut = "0011") report "1:Fail" severity error;

			--wait for 1ns;		
wait for 10ns;
		-- Test2
			ControlWord <= "01000101XXXX" ;
	--		
			report "Test2";
			assert(ALUOut = "0010") report "2:Fail" severity error;

			--wait for 1ns;		

		-- Test3
			ControlWord <= "00100101XXXX" ;
		--	wait for 10ns;
			report "Test3";
			assert(ALUOut = "1010") report "3:Fail" severity error;

			--wait for 1ns;	
		
		report "Test Complete";			

--      wait;
   end process;

END;
