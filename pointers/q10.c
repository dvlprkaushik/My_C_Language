// Write a program in C to calculate the length of a string using a pointer.
// Test Data :
// Input a string : w3resource
// Expected Output :

// The length of the given string w3resource
// is : 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char *ptr = str;
    printf("Enter the string : ");
    scanf("%s", &str);

    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("\nLength of the string [ %s ] is : %d", str, count);
    return 0;
}