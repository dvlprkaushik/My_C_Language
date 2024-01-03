// Write a program in C to display the multiplication table for a given integer.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int table = 15, mul;
    for (int i = 0; i < 10; i++)
    {
        mul = table * (i + 1);
        printf("\n%d x %d = %d", table, i + 1, mul);
    }
    return 0;
}