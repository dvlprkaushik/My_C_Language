//  Write a program in C to display the first 10 natural numbers.
// Expected Output :
// 1 2 3 4 5 6 7 8 9 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i+1);
    }

    return 0;
}