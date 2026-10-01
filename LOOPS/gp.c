/* Display this GP - 1,2,4,8,16,32... upto 'n' terms.  */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i;
    int a=1;
    for (i = 1; i <= n; i = i + 1)
    {

        printf("%d ", a);
        a = a*2;
    }



    return 0;
}