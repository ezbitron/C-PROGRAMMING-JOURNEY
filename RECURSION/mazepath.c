#include <stdio.h>

int maze(int cr, int cc, int enr, int enc)
{
    int rightways = 0;
    int downways = 0;
    if (cr == enr && cc == enc)
    {
        return 1;
    }
    if (cr == enr)
    {
        rightways += maze(cr, cc + 1, enr, enc);
    }
    else if (cc == enc)
    {
        downways += maze(cr + 1, cc, enr, enc);
    }
    else if (cr < enr && cc < enc)
    {
        rightways += maze(cr, cc + 1, enr, enc);
        downways += maze(cr + 1, cc, enr, enc);
    }

    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n;
    printf("Enter the number of rows of the maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns of the maze : ");
    scanf("%d", &m);

    int noOfWays = maze(1, 1, n, m);
    printf("%d", noOfWays);

    return 0;
}