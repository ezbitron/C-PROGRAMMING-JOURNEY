#include <stdio.h>

int main()
{
    int n;
    float term = 100;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%.2f ", term);
        term = term / 2;
    }

    return 0;
}