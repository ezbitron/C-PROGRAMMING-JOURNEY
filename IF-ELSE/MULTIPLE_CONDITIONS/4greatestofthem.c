#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number\n");
    scanf("%d", &a);

    int b;
    printf("Enter the second number\n");
    scanf("%d", &b);

    int c;
    printf("Enter the third number\n");
    scanf("%d", &c);

    int d;
    printf("Enter the fourth number\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("A is greatest");
    }

    else if (b > a && b > c && b > d)
    {
        printf("B is greatest");
    }

    else if (c > a && c > b && c > d)
    {
        printf("C is greatest");
    }

    else if (d > a && d > b && d > c)
    {
        printf("D is greatest");
    }
    else if (a == b == c == d)
    {
        printf("All four are equal");
    }

    return 0;
}
