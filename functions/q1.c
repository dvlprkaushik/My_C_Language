// Write a C program to find cube of any number using function.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cube(int n){
    return n*n*n;
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("\nThe cube of %d is : %d",num,cube(num));
    return 0;
}