//  Write a program in C to find the maximum number between two numbers using a pointer.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :

// 6 is the maximum number.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1, num2, *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter the 1st num : ");
    scanf("%d", &(*ptr1));
    printf("\nEnter the 2nd num : ");
    scanf("%d", &(*ptr2));

    if (num1 > num2)
    {
        printf("\n%d is the maximum number", num1);
    }
    else
    {
        printf("\n%d is the maximum number", num2);
    }

    return 0;
}