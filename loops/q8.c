//  Write a C program to display the n terms of odd natural numbers and their sum.
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n, sum = 0, odd;

    printf("Input number of terms : ");
    scanf("\n%d", &n);
    printf("\nThe odd numbers are :");

    for (i = 1; i <= n; i++)
    {
        odd = 2 * i - 1;
        printf("%d ", odd);
        sum += odd;
    }

    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n, sum);
    return 0;
    return 0;
}