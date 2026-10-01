#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i;
    int a=3;
    for (i = 1; i <= n; i = i + 1)
    {

        printf("%d ", a);
        a = a*4;
    }



    return 0;
}