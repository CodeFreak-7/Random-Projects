/*
    Program to arrange 2D array by printing elements in a Matrix.
    Works for every 2D array no matter what the ROW and COL is.

    ***************CHECK CONCLUSION NOTES***************
*/


#include <stdio.h>

#define ROW 5
#define COL 5

// Main function
int main() {

    int array[ROW][COL];
    int i, j;


    
    // User input
    printf("\nEnter %d integers\n", ROW * COL);

    for (i = 0; i < ROW; i++) {

        // Inner for
        for (j = 0; j < COL; j++) {

            scanf("%d", &array[i][j]);

        } // End inner for

    } // End for


/*
    // Printing array
    printf("\n\nArray in a Matrix:\n");

    for (i = 0; i < ROW; i++) {

        // Inner for
        for (j = 0; j < COL; j++) {

            // If statement for printing in Matrix
            if (j == 0) {
                printf("\n%d", array[i][j]);
            } // End if

            if (j == 1) {
                printf("\t%d", array[i][j]);
            } // End else

            if (j == 2) {
                printf("\t%d", array[i][j]);
            }

        } // End inner for

    } // End for
*/



    // For loop to print in Matrix
    printf("\n\nArray in Matrix:\n");

    for (i = 0; i < ROW; i++) {

        // Inner for
        for (j = 0; j < COL; j++) {

            // If j is 0, print on the first column/new line
            if (j == 0) {
                printf("\n%d", array[i][j]);
            } // End if

            // Else tab after each element on the same row and print
            else {
                printf("\t%d", array[i][j]);
            } // End else

        } // End inner for

    } // End outer for

    return 0;

} // End main



/*

*************************************************
            CONCLUSION NOTES
*************************************************

    The commented out for loop part was used to find the logic.
    COL 3 will only work for that.
    From that I was able to work out the logic on how to apply it for any number of columns.

*/