#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        printf("It is divisible by 5 or 3");
    }
    else
    {
        printf("it is not ");
    }

    return 0;
}