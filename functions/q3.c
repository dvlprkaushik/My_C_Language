// Write a C program to find maximum and minimum between
// two numbers using functions.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void min_max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("\nMaximum : %d", num1);
        printf("\nMinimum : %d", num2);
    }
    else
    {
        printf("\nMaximum : %d", num2);
        printf("\nMinimum : %d", num1);
    }
}

int main()
{
    int num1,num2;
    printf("Enter num1 and num2 : ");
    scanf("%d\n%d",&num1,&num2);
    min_max(num1,num2);
    return 0;
}