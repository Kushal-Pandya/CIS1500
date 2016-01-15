/*************************A3.c****************************
Student Name: Kushal Pandya                        Student Number: 0888884
Date: November 8th 2014                          Course Name: cis1500
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

void playNim(int rowOne, int rowTwo, int rowThree); /* Here Im calling the functions playNim and drawNim and passing the amount of rocks in each row */
void drawNim(int rowOne, int rowTwo, int rowThree);

/* Function purpose: main function that stores value of the rocks in each row
Precondition: no precondition
Postcondition: this function returns out the amount of rocks in each row */
int main(void)
{
    int rowOne;
    int rowTwo;
    int rowThree;

    printf("Welcome to Nim, Enter the numnber of Rocks in each row: ");
    scanf("%d%d%d", &rowOne, &rowTwo, &rowThree);

    drawNim(rowOne, rowTwo, rowThree);
    playNim(rowOne, rowTwo, rowThree);

    return 0;
}

/* Purpose: lets user play the game, and determines the winner
precondition: the function takes in the amount of rocks and prints out the reduced values
postcondition: returns no values */
void playNim(int rowOne, int rowTwo, int rowThree)
{
    int rowNumber;
    int subtractOutput;

    do
    {
        int i;
        for (i = 1; i <= 3; i++)
        {
            if (i == 3) //this if and for loop statement alternates the player from 1 to 2
            {
                i = 1;
            }
            printf("Player %d - Row and Number of Rocks: ", i); //player enters desired row and rocks
            scanf("%d%d", &rowNumber, &subtractOutput);

            if (rowNumber == 1)
            {
                if (subtractOutput < 0) //checking function that determines if the user entered the right amount of rocks
                {
                    printf("Invalid Input, Try Again \n");
                }
                else
                {
                    rowOne -= subtractOutput;
                }
            }
            else if (rowNumber == 2)
            {
                if (subtractOutput < 0)
                {
                    printf("Invalid Input, Try Again \n");
                }
                else
                {
                    rowTwo -= subtractOutput;
                }
            }
            else if (rowNumber == 3)
            {
                if (subtractOutput < 0)
                {
                    printf("Invalid Input Try Again \n");
                }
                else
                {
                    rowThree -= subtractOutput;
                }
            }

            if (rowOne == 0 && rowTwo == 0 && rowThree == 0) //this if statement shows who wins by seeing if all rows are empty
            {
                printf("Player %d Wins!! \n", i);
                break;
            }

           drawNim(rowOne, rowTwo, rowThree); //drawing the game board every turn

        } //the argument of the do while loop is that the game will only run if the user enters values that satisfy the current game board
    }while(rowNumber <= 3 && rowNumber >= 1 && subtractOutput < rowOne && subtractOutput < rowTwo && subtractOutput < rowThree && subtractOutput > 0);

}

/* Purpose: draws the rows of rocks
precondition: takes the amount value of rocks entered by the user from main function
postcondition: returns no values */
void drawNim(int rowOne, int rowTwo, int rowThree)
{
    int i;
    printf("ROW 1: ");
    for (i = 0; i < rowOne; i++)
    {
        printf("O");
    }
    printf("\nROW 2: ");

    for (i = 0; i < rowTwo; i++)
    {
        printf("O");
    }
    printf("\nROW 3: ");

    for (i = 0; i < rowThree; i++)
    {
        printf("O");
    }
    printf("\n");
}