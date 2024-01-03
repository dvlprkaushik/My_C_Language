// Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
// Expected Output :

// Pointer : Demonstrate the use of & and * operator :
// --------------------------------------------------------
//  m = 300
//  fx = 300.600006
//  cht = z

//  Using & operator :
// -----------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using & and * operator :
// -----------------------------
//  value at address of m = 300
//  value at address of fx = 300.600006
//  value at address of cht = z

// Using only pointer variable :
// ----------------------------------
//  address of m = 0x7ffda2eeeec8
//  address of fx = 0x7ffda2eeeecc
//  address of cht = 0x7ffda2eeeec7

//  Using only pointer operator :
// ----------------------------------
//  value at address of m = 300
//  value at address of fx= 300.600006
//  value at address of cht= z

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    int *ptr_m = &m;
    float *ptr_fx = &fx;
    char *ptr_cht = &cht;

    printf("\n\nUsing & operator : ");
    printf("\n-----------------------");
    printf("\nAdress of m : %d", &m);
    printf("\nAddress of fx : %f", &fx);
    printf("\nAddress of cht : %c", &cht);

    printf("\n\nUsing & and * operator : ");
    printf("\n-----------------------");
    printf("\nValue at address of m = %d", *(&m));
    printf("\nValue at address of  = %f", *(&fx));
    printf("\nValue at address of m = %c", *(&cht));

    printf("\n\nUsing only pointer variable : ");
    printf("\n-----------------------");
    printf("\nAddress of m = %d", ptr_m);
    printf("\nAddress of fx = %f", ptr_fx);
    printf("\nAddress of cht = %c", ptr_cht);

    printf("\n\nUsing only pointer operator : ");
    printf("\n-----------------------");
    printf("\nValue at address of m = %d",*ptr_m);
    printf("\nValue at address of fx = %f",*ptr_fx);
    printf("\nValue at address of cht = %c\n",*ptr_cht);

    return 0;
}