   1								Student Number: 0888884
   2                                                       	Assignment 3: a3.c
   3  Kushal Pandya                              
   4  CIS 1500                                                
   5  November 8 2014
   6 
   7  *************
   8  Compiling the program
   9  *************
  10  This program will compile using gcc "filename".c or gcc a3.c
  11  It will also compile using the flags: -std=c99 -Wall -pedantic
  12  
  13  *************
  14  Running the program
  15  *************
  16  The user will be prompted to enter the amount of rocks in reach row (Rows 1 to 3)
  17  Then the first player will be asked to enter the row number of which row they would like to reduce the rocks and the amount
      The players will alternate each time he/she has taken away any rocks
  18  The program will run until there are no more rocks in each of the three rows 
  19  After this occurs, the program will output which player wins and will end
  20 
  21  *************
  22  Known Limitations
  23  *************
  24  The biggest known limitation I have is that when a player enters an invalid amount of rocks or rows then the program will not recieve that information (as it should)
		but then the player still alternates as if the player did enter correct information 

  26  The second limitation is if the user enters characters or symbols, this will result in an infinite loop and therefore the program does not run properly

  28  A third limitation I have is that the user can only enter a certain amount of rocks, since int only has a specific limit (about 2^31)	    
