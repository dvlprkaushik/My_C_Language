// Write a program in C to find the square of any number using the function.
// Test Data :
// Input any number for square : 20
// Expected Output :

// The square of 20 is : 400.00

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float sqr(int num){
    return num*num;
}
int main()
{
    int number = 20;
    printf(" The square of %d is : %.2f",number,sqr(number));
    
    
    return 0;
}