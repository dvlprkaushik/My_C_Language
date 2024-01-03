// Write a program in C to store n elements in an array and print the elements using a pointer.
// Test Data :
// Input the number of elements to store in the array :5
// Input 5 number of elements in the array :
// element - 0 : 5
// element - 1 : 7
// element - 2 : 2
// element - 3 : 9
// element - 4 : 8
// Expected Output :

//  The elements you entered are :
//  element - 0 : 5
//  element - 1 : 7
//  element - 2 : 2
//  element - 3 : 9
//  element - 4 : 8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("Input thr number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", arr + i);
    }
    printf("\nElements you entered are : ");
    for (int i = 0; i < n; i++)
    {
        printf("\nelement - %d : %d", i, *(arr + i));
    }
    return 0;
}