#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        char ch = 64 + i;

        printf("%c", ch);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        char a = 64 + 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", a);
            a++;
        }
        nst = nst - 1;
        nsp = nsp + 2;
        printf("\n");
    }

    return 0;
}
