#include <stdio.h>

int main()
{
    int n;

    printf("Enter no. of lines : ");
    scanf("%d", &n);

    // 1234567
    // 123 567
    // 12   67
    // 1     7

    int nst = n;
    int nsp = 1;

    // First line
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d", i);
    }

    printf("\n");

    // Remaining lines
    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        // Left side
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }

        // Spaces
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }

        // Right side
        int b = nst;

        for (int l = 1; l <= nst; l++)
        {
            printf("%d", b + 1);
            b++;
        }

        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}