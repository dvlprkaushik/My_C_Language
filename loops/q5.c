// Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    
int main()
{
    int n,num,cube;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        cube = i*i*i;
        printf("\nNumber is : %d and cube of the %d is : %d",i,i,cube);
    }
    return 0;
}