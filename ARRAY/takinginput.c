#include <stdio.h>
int main()
{
    // int arr[4];

    // printf("Enter first element : ");
    // scanf("%d",&arr[0]);

    // printf("Enter second element : ");
    // scanf("%d",&arr[1]);

    // printf("Enter third element : ");
    // scanf("%d",&arr[2]);

    // printf("Enter fourth element : ");
    // scanf("%d",&arr[3]);



    int a[5];
     for (int i = 0; i <= 4; i++)
    {
        int k = i+1;
        printf("Enter element number %d : ",k);
        scanf("%d", &a[i]); // for input
    }


    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", a[i]); // for output
    }

    return 0;
}