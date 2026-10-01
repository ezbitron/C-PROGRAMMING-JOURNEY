#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i;
    int a=100;
    // for (i = 1; i <= n; i = i + 1)
    // {
    //     if(a>0){
    //     printf("%d ", a);
    //     a = a-3;
    // }
    // }

     for (i = 1; a>0 ; i = i + 1) // sirf condition chahiye no matter what
    {
        if(a>0){
        printf("%d ", a);
        a = a-3;
    }
    }



    return 0;
}