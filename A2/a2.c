/*************************A2.c****************************
Student Name: Kushal Pandya                   Student Number:  0888884
Date: Friday October 17                        Course Name: CIS1500
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
     1) I have read and understood the University policy on academic integrity;
     2) I have completed the Computing with Integrity Tutorial on Moodle; and
     3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all material
(data, images, ideas or words) that I have used, whether directly quoted or paraphrased.
Furthermore, I certify that this assignment was prepared by me specifically for this course.
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void choice(int nChoice, char cChoice); /*Declaring the function choice, determines the choice of the user and computer*/
int main(void) 
{
	int randNum; /*All integers are listed here as well as delcarations*/
	int userChoice; 
	int gamesPlayed; 
	int timesTied; 
	int timesLost; 
	int timesWon; 
	timesTied = 0;  
	timesLost = 0;
	timesWon = 0;

	printf("This program allows you to play Rock, Paper, Scissors, Lizard, Spock \nHow many games do you want to play? ");
	scanf("%d", &gamesPlayed); /*Takes input of the games that the user wants to play and assigns it to the variable of gamesPlayed*/
	printf("\n");
	
	int i;
	for (i = 1; i <= gamesPlayed; i++) 
	{ /* loop says that keep printing/incrementing i (or code) until that number is equal to the gamesPlayed*/
			printf("Game Number %d \n", i);
			printf("5=spock, 4=lizard, 3=rock, 2=scissors, 1=paper \n"); 
			printf("What's your choice? ");
			scanf("%d", &userChoice); 
			choice(userChoice, 'U'); /*This calls the choice function which assigns a char value to the userChoice*/
		do 
		{
			if (userChoice > 1 || userChoice < 5)
			{
				int rand(); /*this is the random number generator, declaring the rand() function here */
				srand(time(NULL));
				randNum = (rand() % 5) + 1; 
				choice(randNum,'C'); /*This calls the choice function which assigns a char value to the randNum*/
			
				if (userChoice == randNum) 
				{
					printf("Game is a tie! \n \n"); 
					timesTied++; /*the timesTied variable will count up to the amount of times the game has tied*/
				}
				else if ((userChoice+1)%3 == randNum) 
				/*the user choice is added 1 to it and then mod by 3, this works because the bigger number always defeats the one lower to it, 
				 expect for some cases*/
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 2 && randNum == 3)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 5 && randNum == 4)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 4 && randNum == 2)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 4 && randNum == 3)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 1 && randNum == 4)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else if (userChoice == 2 && randNum == 5)
				{
					printf("You lose! \n \n");
					timesLost++; 
				}
				else /*if all other cases result in a loss then the user has won the game*/
				{
					printf("You Win! \n \n");
					timesWon++; 
				}
			}
			else
			{
				printf("Invalid Input");
			}
		}while(userChoice < 1 || userChoice > 5);
	}
		printf("Here is the final score \n"); /*final score statements*/
		printf("You have won %d game(s) \n", timesWon);
		printf("I have won %d game(s) \n", timesLost);
		printf("and %d game(s) ended in a tie \nThanks for playing!", timesTied);

    return(0);
}

void choice(int nChoice, char cChoice) /*this function determines what the user and computer chooses
 * function does not return any value
 * nChoice assigns the object to a string of what the user or computer chooses*/
	{
	char *cCurrent;
	if(cChoice =='U') /*this decision statement determines if the char value is from the user or computer (U or C)*/
		{
			cCurrent = "User chooses";
		}
		else if(cChoice == 'C')
		{
			cCurrent = "Computer chooses";
		}
	switch(nChoice) /*this switch statment will assign a string of the chosen object to the current variable: cCurrent*/
	{		
		case 1:
			printf("%s paper\n",cCurrent);
			break;
		case 2:
			printf("%s scissors\n", cCurrent);
			break;
		case 3:
			printf("%s rock\n", cCurrent);
			break;
		case 4:
			printf("%s lizard\n",cCurrent);
			break;
		case 5:
			printf("%s spock\n", cCurrent);
			break;
	}
}

