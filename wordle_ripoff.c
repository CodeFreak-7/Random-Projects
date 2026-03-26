/*
    Description: Cheap ass wordle. Please work.
                 Does it work (y/n)? 
    
    Author: CodeFreak-7

    Date: 26-03-2026

*/


#include <stdio.h>

// Symbolic names
#define SIZE 6
#define CHANCES 7


// Function signatures
// ...
// ...



// Function main()
int main()
{
    // Declare variables
    char word[SIZE] = {'c', 'o', 'd', 'i', 'n', 'g'};
    char redacted[SIZE] = {'_', '_', '_', '_', '_', '_'};
    char guess;
    int right_guess = 0;
    int i = 0;

    
    



    // Prompt player for a word
    printf("Guess a letter\n");
    scanf("%c", &guess);


    // Do while loop with nested if to check if guess is in word[]
    do
    {
        if (guess == word[i])
        {
            // change right_guess to 1
            right_guess = 1;

        } // End if

        i++; // Increment i

    } // End do 
    // Keep running the loop while i is less than SIZE and right_guess is 0
    while ((i < SIZE) && (right_guess == 0));


    // If statement to check if player guessed right
    if (right_guess == 1)
    {
        redacted[i - 1] = guess; // Place guess into the right element in redacted[]

        // For loop to print redacted[]
        printf("\n\nCorrect guess. It is located here: ");
        for (i = 0; i < SIZE; i++)
        {
            printf("%c", redacted[i]);

        } // End for

    } // End if


    else // Else print guess is not in word[]
    {
        printf("\n\n%c is not in the word.", guess);

    } // End else


    // Change right_guess back to 0 for the loop to run again
    right_guess = 0;
    



    
    

/************************************************************
    // For loop with nested if
    // to check if guess matches a letter
    for (i = 0; i < SIZE; i++)
    {
        if (guess == word[i])
        {
            // If guess matches with the element in word
            // replace the element with same index in redacted with guess
            redacted[i] = word[i];

        } // End if

    } // End for
*************************************************************/




/***********************************************************
    // Print the redacted version to screen
    printf("\n\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%c", redacted[i]);

    } // End for
************************************************************/



    return 0;
}