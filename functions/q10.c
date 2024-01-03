// Write a program in C to get the largest element of an array using the function.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Expected Output :

// The largest element in the array is : 5
#include <stdio.h>
#define MAX 100

int findMaxElem(int[]);
int n;

int main()
{
    int arr1[MAX], mxelem, i;
    printf("\n\n Function : get largest element of an array :\n");
    printf("-------------------------------------------------\n");

    printf(" Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf(" Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    mxelem = findMaxElem(arr1);

    printf(" The largest element in the array is : %d\n\n", mxelem);
    return 0;
}
int findMaxElem(int arr1[])
{
    int i = 1, mxelem;
    mxelem = arr1[0];
    while (i < n)
    {
        if (mxelem < arr1[i])
            mxelem = arr1[i];
        i++;
    }
    return mxelem;
}