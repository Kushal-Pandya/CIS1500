/*************************A4.c********************************************
Student Name: Kushal Pandya                   Student Number: 0888884
Date: Friday November 21                      Course Name: CIS1500
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
#include <string.h>
#include <ctype.h>

int check4pangram(char userInput[]);  //Here I am initializing my functions and passing through the sentence that the user inputs 
void missingLetters(char abc[], int isPanagram[]);
void isTautogram();

/*Function purpose: main function that asks user to input a sentence and stores it in userInput and also converts to lowercase
Precondition: none
Postcondition: function will return the sentence array in lowercase */
int main(void)
{	
	printf("Please enter a sentence: ");
	char userInput[100];	
	fgets(userInput, sizeof(userInput), stdin);
	printf("You entered: ");
	
	int i;
	for (i = 0; i < strlen(userInput); i++) // since userInput is a char, I have to make each character in the array to lowercase one by one using this loop
	{
		userInput[i] = tolower(userInput[i]);
		putchar(userInput[i]);
	}
	
	check4pangram(userInput);
	isTautogram(userInput);
	return 0;
}


/*Function purpose: the sentence entered by the user is checked with the alphabet and determines whether the userInput array consists of all the letters in the alphabet
Precondition: function takes in sentence from user
Postcondition: function will return out whether the userInput array is a panagram or not */
int check4pangram(char userInput[])
{
	char abc[27]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	int i;
	int isPanagram[26] = {0};
	int j;

	for (i = 0; i < strlen(userInput); i++) 
	{
		for (j = 0; j < 26; j++) //this nested for loop checks through the user input and the alphabet array and if the userinput consists of the alphabet, then a boolean value of true is assigned to isPanagram
		{
			if (userInput[i] == abc[j]) 
			{
				isPanagram[j] = 1;
			}
		}
	}
	
	int x;
	for (x = 0; x < 27; x++) //This for loop will check through the alphabet to see if user input consists of the alphabet, if not then a boolean value os false is assigned and the sentence is not a panagram
	{
		if (isPanagram[x] == 0)
		{
			printf("The Sentence: %sis not a panagram.\n", userInput);
			missingLetters(abc, isPanagram); //calls for missingLetters function to see what it requires to be a panagram
			return 0;
		}
	}
	printf("The Sentence: %sis a panagram.\n", userInput);	
	return 0;
} 


/*Function Purpose: To see what the user input requires to be a panagram
Precondition: function takes in the alphabet array and the isPanagram array 
Postcondition: none */
void missingLetters(char abc[], int isPanagram[])
{
	int j;
	printf("The following are missing letters:\n");
	for (j = 0; j < 26; j++) // this for loop checks through the alphabet when isPanagram is false or not a panagram and outputs the missing letters
		{
			if (isPanagram[j] == 0)
			{
				printf("%c ", abc[j]);
			}
		}
	printf("\n");
}

/*Function Purpose: To check whether the sentence is a tautogram
Precondition: function takes in the userInput array
Postcondition: none, but breaks when it is a tautogram */
void isTautogram(char userInput[])
{
	char firstLetter = userInput[0];
	
	int i;
	for (i = 1; i < strlen(userInput); i++) //This for loop will once more scan through the sentence 
	//if the sentence is equal to a space and if the following letter is equal to the first letter than it will print tautogram
	 {
		if (userInput[i] == 32); 
		{
			if (userInput[i+1] == firstLetter)
			{
				printf("The sentence is also a tautogram!\n");
				break;
			}
		}
	}
}
