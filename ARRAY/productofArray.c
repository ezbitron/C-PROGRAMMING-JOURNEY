#include <stdio.h>
int main()
{
    int product = 1;
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= (n - 1); i++)
    {
        printf("Enter the element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= (n - 1); i++)
    {
        product = product * arr[i];
    }
        printf("%d ", product);
    return 0;
}