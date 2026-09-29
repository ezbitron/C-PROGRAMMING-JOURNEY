#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // no of rows -> i
    {

        // for (int j = 1; j <= (2*n-1); j=j+2) // no of columns -> j
        // {
        //     printf("%d ", j);
        // }  // This use mathematics




        int a=1;
        for (int j=1; j<=i;j++ ){
            printf("%d ",a);
            a=a+2;
        }  // This use extra variable


        printf("\n");
    }
    return 0;
}