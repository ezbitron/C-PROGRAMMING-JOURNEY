#include <stdio.h>
int main()
{
    int a = 2;

    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);

    int power = 1;

    for (int i = 1; i <= n; i++)
    {
        power = power * a;
        printf("The %d power raised by %d is %d\n", a, i, power);
    }

    return 0;
}