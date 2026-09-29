#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[4] = {2, 3, 4, 5};
    for (int i = 0; i <= 3; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}