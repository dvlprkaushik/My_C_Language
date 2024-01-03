// Write a program in C to show the basic declaration of a pointer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m = 10, n, o, *z;
    z = &m;
    printf("\nz stores the address of m = %d", z);
    printf("\n*z stores the value of m = %d", *z);
    printf("\n&m is the address of m = %d", &m);
    printf("\n&n stores the address of n = %d", &n);
    printf("\n&o stores the address of o = %d", &o);
    printf("\n&z stores the address of z = %d", &z);
    return 0;
}