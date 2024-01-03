// Write a program in C to display n terms of natural numbers and their sum.
// Test Data : 7
// Expected Output :
// The first 7 natural number is :
// 1 2 3 4 5 6 7
// The Sum of Natural Number upto 7 terms : 28
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("\nThe first %d natural number is : ", n);
    for (int i = 0; i < n; i++)
    {
        sum += i + 1;
        printf("%d ", i + 1);
    }
    printf("\nThe sum of Natural numbers upto %d terms : %d", n, sum);
    return 0;
}