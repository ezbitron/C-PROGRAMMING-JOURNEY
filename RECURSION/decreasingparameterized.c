#include <stdio.h>

void printNto1(int n, int start)
{
    if (start == 0)
        return;

    printNto1(n, start - 1);

    printf("%d ",n- start + 1);
}

int main()
{
    int n = 5;

    printNto1(n, n);

    return 0;
}