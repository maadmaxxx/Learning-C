#include <stdio.h>

int main() 
{
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*In this program, we take input from the user for the number of rows for the pyramid. We use two nested for loops to print the pyramid. The outer loop runs from 1 to the number of rows, and the inner loops print the spaces and the stars for each row.

The first inner loop prints the spaces before the stars. We calculate the number of spaces for each row as rows - i. The second inner loop prints the stars for each row. We calculate the number of stars for each row as 2 * i - 1.

Finally, we print a newline character at the end of each row to move to the next line.*/









