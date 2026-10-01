#include <stdio.h>
int main()
{
    int n = 1234;
    int r = 0;
    int sum = 0;
    int ld = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + ld;
        r = r * 10;
        r = r + (n % 10);

        n = n / 10;
    }
    printf("%d %d", sum, r);
    return 0;
}