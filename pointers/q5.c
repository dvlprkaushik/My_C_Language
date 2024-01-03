// Write a program in C to add numbers using call by reference.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :

//  The sum of 5 and 6  is 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reference(int *a, int *b)
{
    int c = *a + *b;
    return c;
}
int main()
{
    int num1, num2;
    printf("Enter 1st num : ");
    scanf("%d", &num1);
    printf("\nEnter 2nd num : ");
    scanf("%d", &num2);
    printf("\nThe sum of %d and %d are = %d", num1, num2, reference(&num1, &num2));
    return 0;
}