#include <stdio.h>
#include <string.h>
#define SIZE 100 //Used to restrict word to 100 characters

void reversedWord(char input[], int size2)
{
	int n = 0;
	char temp[SIZE];
	char answer;		// Used to break the recursive function

	for (n = 0; n != size2; n++)
		temp[n] = input[size2 - 1 - n];	//Copies the string in reverse

	strcpy(input, temp);			//Copies the string from temp back to the original input

	printf("Your word spelled backwards is: %s.\n", input);
	printf("Would you like to continue (Y|N)?");
	scanf(" %c", &answer);

	if (answer == 'Y')
	{
		printf("Please enter a word: ");
		scanf("%s", input);
		reversedWord(input, strlen(input));
	}				//If user answers yes, repeat the function

	else if (answer == 'N')
		printf("Thank you! Goodbye!\n");							//if user answers no, thank and exit

	else
		printf("Error: Please restrict your answer to Y or N\n");									//If user mistakenly presses the wrong key. Print error and exit
}

int main(void)
{
	char word[SIZE];
	int length;

	printf("Please enter a word: ");
	scanf("%s", word);
	length = strlen(word);
	reversedWord(word, length);
}