// Write a C program to check whether
// a number is even or odd using functions.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Odd_Even(int number)
{
    int result = (number % 2 == 0) ? printf("\nNumber is even") : printf("\nNumber is odd");
    return result;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("%d", Odd_Even(num));
    return 0;
}