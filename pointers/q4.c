// Write a program in C to add two numbers using pointers.
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :

// The sum of the entered numbers is : 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 5, b = 6, *ptr_a, *ptr_b, sum;
    ptr_a = &a;
    ptr_b = &b;
    sum = *ptr_a + *ptr_b;
    printf("The sum of %d and %d is = %d", a, b, sum);

    return 0;
}