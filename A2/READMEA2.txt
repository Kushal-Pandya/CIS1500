                                                  Student Number: 0888884
                                                      Assignment 2: a2.c
1 Kushal Pandya                              
2 CIS 1500                                                
3 Friday October 17
4
5 *************
6 Compiling the program
7 *************
8 This program will compile using gcc "filename".c or gcc a2.
  It will also compile using the flags: -std=c99 -Wall -pedantic
9 
10 *************
11 Running the program
12 *************
13  The user will be prompted to enter the number of games they will play (enter any integer number)
    Then the user will be asked to make a choice of what they would like to play as (enter a number from 1 to 5)
    The program will run as many games as the user entered and will ask for their choice each game
    After the final game is done, the program will output the final score and exit
14
15 *************
16 Known Limitations
17 *************
18  The biggest limitation I have is that my do-while checking function does not work, when entered a number greater than 5 or less 
      than 0 when prompted for what the user wants to play as, it results in an infinite loop. 
    The second limitation is if the user enters characters, symbols, or negative numbers in either the gamesPlayed input or the 
      userChoice input than this will either end the game or cause an infinite loop
   