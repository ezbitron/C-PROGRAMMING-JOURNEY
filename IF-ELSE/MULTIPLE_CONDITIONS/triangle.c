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

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("It is invalid triangle");
    }
    return 0;
}