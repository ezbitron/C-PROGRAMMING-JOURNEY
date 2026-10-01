/*Given the length and breadth pf a rectangle, write a program to find whether the area of the
rectangle is greater than its perimeter. */

#include <stdio.h>
int main()
{
    int l, b;
               printf("Enter the length of the rectangle : ");
    scanf("%d", &l);

    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &b);

    int A = l * b;
    int P = 2 * (l + b);

    if (A > P)
    {
        printf("Area is greater than its perimeter ");
    }
    else
    {
        printf("Perimeter is greater than its area");
    }
    return 0;
}