// Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sum, count = 10,n;
    float avg;
    for (int i = 1; i <= count; i++)
    {
        printf("\nEnter no.%d element : ", i);
        scanf("%d", &n);
        sum += n;
    }
    avg = sum / count;
    printf("\nThe sum of %d no is : %d", count, sum);
    printf("\nThe avgerage is : %f", avg);
    return 0;
}