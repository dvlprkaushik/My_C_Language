// Write a program in C to display a pattern like a right angle triangle using an asterisk.

// The pattern like :

// *
// **
// ***
// ****
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int star;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++) // Nested loop to print asterisks based on the current row.
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}