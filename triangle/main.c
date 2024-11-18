//Name: Maria Esteban
//Purpose: prompts the user for a number of rows and then draws a triangle of the given rows using the "*" character
//Date: 11/17/24

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;

    // Prompt the user for input and validate that is within the limits, if it is not prompt again
    do {
        printf("Enter the number of rows in the triangle: ");
        scanf("%d", &rows);

        if (rows <= 1 || rows > 20) {
            printf("Please enter a valid integer from 1 to 20.\n");
        }
    } while (rows <= 1 || rows > 20);

    // Put the necessary leading spaces for top of the triangle
    for (int i = 0; i < rows - 1; i++) {
            printf(" ");
        }
    printf("*\n");

    // Create the rest of the triangle
    for (int i = 1; i <= rows-1; i++) {

        // Print the last row of the triangle
        if (i == rows-1) {
            for (int j = 0; j < 2 * rows - 1; j++) {
                printf("*");
            }

        } else {
            //Leading spaces
            for (int j = 0; j < rows - i - 1; j++) {
                printf(" ");
            }
            printf("*");

            //Spaces in between the asteriscs
            for (int j = 0; j < 2 * i - 1; j++) {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }

    }

    return 0;
}
