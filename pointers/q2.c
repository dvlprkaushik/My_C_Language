// Write a program in C to demonstrate how to handle pointers in a program.
// Expected Output :

// Address of m : 0x7ffcc3ad291c
//  Value of m : 29

//  Now ab is assigned with the address of m.
//  Address of pointer ab : 0x7ffcc3ad291c
//  Content of pointer ab : 29

//  The value of m assigned to 34 now.
//  Address of pointer ab : 0x7ffcc3ad291c
//  Content of pointer ab : 34

//  The pointer variable ab is assigned with the value 7 now.
//  Address of m : 0x7ffcc3ad291c
//  Value of m : 7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m = 29, *ab;
    printf("\nAddress of m : %d", &m);
    printf("\nvalue of m : %d", m);
    ab = &m;
    printf("\nNow ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %d\n", &(*ab));
    printf("Content of pointer ab : %d", *ab);

    m = 34;
    printf("\nThe value of m assigned to 34 now.");
    printf("\nAddress of pointer ab : %d",&(*ab));
    printf("\nContent of pointer ab : %d",*ab);

    *ab = 7;
    printf("\n The pointer variable ab is assigned with the value 7 now.");
    printf("\nAddress of m : %d",&m);
    printf("\nValue of m : %d",m);
    return 0;
}