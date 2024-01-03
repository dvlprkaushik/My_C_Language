// Write a C program to find diameter, circumference and area of circle using functions.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Diameter(int radius)
{
    int diameter = 2 * radius;
    return diameter;
}
float Circumference(float radius)
{
    float circumference = 2 * 3.14 * radius;
    return circumference;
}
float Area(float radius)
{
    float area = 3.14 * (radius * radius);
    return area;
}
int main()
{
    int radius;
    printf("\nEnter the radius of the circle : ");
    scanf("%d", &radius);
    printf("\nDiameter of the circle : %d", Diameter(radius));
    printf("\nCircumference of the circle : %.2f", Circumference(radius));
    printf("\nArea of the circle : %.2f", Area(radius));
    return 0;
}