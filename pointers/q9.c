// Write a program in C to find the largest element using Dynamic Memory Allocation.
// Test Data :
// Input total number of elements(1 to 100): 5

// Number 1: 5
// Number 2: 7
// Number 3: 2
// Number 4: 9
// Number 5: 8
// Expected Output :

// The Largest element is :  9.00

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *arr, n;
    printf("\nInput total number of elements(1 to 100) : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nNumber %d : ", i + 1);
        scanf("%d", &arr[i]);
        if (*arr < *(arr + i))
        {
            *arr = *(arr + i);
        }
    }
    printf("\nthe largest element is : %d", *arr);
    return 0;
}