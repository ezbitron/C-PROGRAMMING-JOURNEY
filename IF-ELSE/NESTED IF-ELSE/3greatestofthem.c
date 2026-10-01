#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first integer\n");
    scanf("%d", &a);

    int b;
    printf("Enter the second integer\n");
    scanf("%d", &b);

    int c;
    printf("Enter the third integer\n");
    scanf("%d", &c);

    if (a > b) // b is out of race
    {
        if (a > c)
        {
            printf("A is greatest");
        }
        else // a<c
        {
            printf("C is greatest");
        }
    }
    else // this else means that b>a and a is not greatest for now
    {
        if (b > c)
        {
            printf("B is greatest");
        }
        else // c is greater than b
        {
            printf("C is greatest");
        }
    }
    return 0;
}

// there is a flaw in this code if all are equal then it shows c is greatest