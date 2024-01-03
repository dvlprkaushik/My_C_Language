//  Write a program in C to find the factorial of a given number using pointers.
// Test Data :
// Input a number : 5
// Expected Output :

// The Factorial of 5 is : 120 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    
int main()
{
    int n,x = 1,*fact = &x;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        *fact = *fact*(i+1);
    }
    printf("\n%d",*fact);
    
    return 0;
}
