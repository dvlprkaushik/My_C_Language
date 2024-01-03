// Write a program in C to swap two numbers using a function.
// Test Data :
// Input 1st number : 2
// Input 2nd number : 4
// Expected Output :

// Before swapping: n1 = 2, n2 = 4
// After swapping: n1 = 4, n2 = 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int num1, int num2)
{
    int temp;
    printf("\nBefore swapping : n1 = %d, n2 = %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping : n1 = %d, n2 = %d", num1, num2);
}
int main()
{
    int num1, num2;
    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    swap(num1, num2);
    return 0;
}