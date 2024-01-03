// Write a program in C to make such a pattern like a right 
// angle triangle with the number increased by 1.

// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    
int main()
{
     int rows,k=1;
    printf("Enter the rows : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}
