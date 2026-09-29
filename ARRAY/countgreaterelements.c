#include <stdio.h>
int main()
{
    int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int count = 0;
    int x = 4;

    for (i = 0; i <= 10; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}