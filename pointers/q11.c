// Write a program in C to swap elements using call by reference.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
int main()
{
    int num1, num2, num3;
    printf("\nInput value for 1st element : ");
    scanf("%d", &num1);
    printf("\nInput value for 2nd element : ");
    scanf("%d", &num2);
    printf("\nInput value for 3rd element : ");
    scanf("%d", &num3);
    printf("\nThe value before swapping are : ");
    printf("\nElement 1 = %d", num1);
    printf("\nElement 2 = %d", num2);
    printf("\nElement 3 = %d", num3);
    swap(&num1, &num2, &num3);
    printf("\nThe value after swapping are : ");
    printf("\nElement 1 = %d", num1);
    printf("\nElement 2 = %d", num2);
    printf("\nElement 3 = %d", num3);
    return 0;
}