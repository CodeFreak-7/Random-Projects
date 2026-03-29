/*
    Description: Hangman game. Guess the word by letters.
    
    Author: CodeFreak-7

    Date: 26-03-2026

*/


#include <stdio.h>
#include <stdlib.h>


// Symbolic names
#define SIZE 6
#define CHANCES 7


// Function signatures
void start_menu(void);


// Function main()
int main()
{
    // Declare variables
    char word[SIZE] = {'c', 'o', 'd', 'i', 'n', 'g'};
    char redacted[SIZE] = {'_', '_', '_', '_', '_', '_'};
    char guess;
    int right_guess = 0;
    int attempts = CHANCES;
    int won;
    int i;


    // Calling start_menu()
    // A menu that gets displayed when the program starts running
    // Displays the rules and how the game works
    //
    start_menu();


    // Do while loop to keep reading guesses
    do
    {
        // Set won to 0 to indicate player has not yet won the game
        won = 0;


        // Prompt player for a word
        printf("\nGuess a letter\n");
        scanf(" %c", &guess);               // Added space before %c to ignore white space characters


        // Initialise i
        i = 0;


        // Do while loop with nested if to check if guess appears atleast once in the word
        do
        {
            if (guess == word[i])
            {
                // change right_guess to 1
                right_guess = 1;

            } // End if

            i++;        // Increment i

        } // End do 
        // Keep running the loop while i is less than SIZE and right_guess is 0
        while ((i < SIZE) && (right_guess == 0));


        // If statement to check if player guessed right
        if (right_guess == 1)
        {
            // For loop to place guess into the right elements of redacted[]
            for (i = 0; i < SIZE; i++)
            {
                if (guess == word[i])
                {
                    redacted[i] = guess;

                } // End if

            } // End for

            // For loop to print redacted[]
            printf("Correct guess. It is located here: ");
            for (i = 0; i < SIZE; i++)
            {
                printf("%c", redacted[i]);

            } // End for
            
            printf("\n"); // Printing new line for readability

        } // End if


        else // Else print guess is not in word[]
        {
            attempts--; // Reduce the attempts by 1 after every wrong guess
            printf("%c is not in the word. You have %d attempts remaining.\n", guess, attempts);

        } // End else


        // Change right_guess back to 0 for the loop to run again
        right_guess = 0;
    

        // For loop with nested if to check if the elements of redacted[] matches with elements of word[]
        for (i = 0; i < SIZE; i++)
        {
            if (redacted[i] == word[i])
            {
                won++;      // Increment won

            } // End if

        } // End for

    } // End do
    // While attempts haven't ran out and player haven't won the game
    while ((attempts > 0) && (won != SIZE));


    // If statement to print player lost the game after running out of attempts
    if ((attempts == 0) && (won != SIZE))
    {
        printf("\n\nGame over, you have ran out of attempts. The correct word was 'coding'");

    } // End if


    else // Else print player won the game
    {
        printf("\n\nYou guessed the word correctly");

    } // End else
    
    

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



    return 0;       // End program

} // End main()



// Function start_menu()
// This function displays a start menu for the game with rules on how to play
//
void start_menu(void)
{
    char ok;

    printf("Welcome to Hangman\n\n\n");
    printf("RULES:\n\n");
    printf("1. WIN by guessing all letters of the word.\n");
    printf("2. You can only guess one letter at a time.\n");
    printf("3. If a letter occurs multiple times in a word, one guess is enough to reveal them.\n");
    printf("4. You have 7 chances to make mistakes.\n");
    printf("5. If you guess the wrong letter 7 times you LOSE.\n");
    printf("6. Enjoy playing.\n");

    printf("\n\nPress ENTER key to start playing.\n");
    scanf("%c", ok);

    system("cls");      // Clear console (Windows)

} // End start_menu()
