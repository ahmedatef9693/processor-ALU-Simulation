----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:19:50 05/02/2014 
-- Design Name: 
-- Module Name:    MainModule - Behavioral 
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
use work.MyPackage.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MainModule is
    Port ( ControlWord : in  STD_LOGIC_VECTOR (11 downto 0);
           ALUOut : out  STD_LOGIC_VECTOR (3 downto 0));
end MainModule;

architecture Behavioral of MainModule is

SIGNAL Data1: std_logic_vector(3 downto 0);
SIGNAL Data2: std_logic_vector(3 downto 0);
SIGNAL AluOp: std_logic_vector(3 downto 0);
SIGNAL Data1SHL: std_logic_vector(3 downto 0);
SIGNAL Data1SHR: std_logic_vector(3 downto 0);
SIGNAL AdderOut: std_logic_vector(3 downto 0);
SIGNAL Tmp: std_logic_vector(3 downto 0);

begin

AluOp <= ControlWord(11 downto 8);
Data1 <= ControlWord(7 downto 4);
Data2 <= ControlWord(3 downto 0);

Data1SHL <= Data1(2 downto 0) & '0' ;
Data1SHR <= '0' & Data1(3 downto 1) ;

myAdder: AdderSubtractor4 port map(Data1 , Data2 , '0' , AdderOut);

myMux: MUX4 generic map(4) port map(Data1SHR , AdderOut , Data1SHL , Tmp , AluOp(1 downto 0) , ALUOut);

end Behavioral;

