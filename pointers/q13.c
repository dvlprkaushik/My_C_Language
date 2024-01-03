//  Write a program in C to count the number of vowels and consonants in a string using a pointer.
// Test Data :
// Input a string: string
// Expected Output :

// Number of vowels : 1
// Number of constant : 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    int count_vowel = 0, count_consonant = 0;
    char string[MAX_SIZE];
    printf("Enter the string : ");
    scanf("%s", &string);
    char *ptr = string;
    printf("\nThe string is : %s", string);
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            count_vowel++;
        }
        else
        {
            count_consonant++;
        }
        ptr++;
    }
    printf("\nNumber of vowels : %d \nNumber of consnants : %d\n", count_vowel, count_consonant);
    return 0;
}