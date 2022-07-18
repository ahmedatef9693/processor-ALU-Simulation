----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:18:49 05/03/2014 
-- Design Name: 
-- Module Name:    AdderSubtractor4 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_SIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity AdderSubtractor4 is
    Port ( Input1 : in  STD_LOGIC_VECTOR (3 downto 0);
           Input2 : in  STD_LOGIC_VECTOR (3 downto 0);
           Mode : in  STD_LOGIC;
           Result : out  STD_LOGIC_VECTOR (3 downto 0));
end AdderSubtractor4;

architecture Behavioral of AdderSubtractor4 is
begin

Result <= Input1 + Input2 when Mode = '0'
			else Input1 - Input2;
			
end Behavioral;

