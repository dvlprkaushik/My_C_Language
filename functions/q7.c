// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
// Expected Output :

//  The sum of the series is : 34

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n)
{
    int num = 0, f = 1;
    while (num <= n - 1)
    {
        f = f + f * num;
        num++;
    }
    return f;
}
int main()
{
    int sum;
    sum = factorial(1) / 1 + factorial(2) / 2 + factorial(3) / 3 + factorial(4) / 4 + factorial(5) / 5;
    printf("\n\n Function : find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
    printf("----------------------------------------------------------\n");
    printf("The sum of the series is : %d\n\n", sum);
    return 0;
}