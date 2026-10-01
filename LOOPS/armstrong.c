#include <stdio.h>

int main()
{
    int i, n, digit, sum;

    for(i = 1; i <= 500; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + (digit * digit * digit);
            n = n / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}