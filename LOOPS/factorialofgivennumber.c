#include <stdio.h>

int factorial(int n)
{
    int product = 1;

    for(int i = 1 ; i <= n; i++)
    {
         product = product * i;
    }
    return product;
}
int main()
{
    int n;
    
    printf("Enter a number : \n");
    scanf("%d", &n);
    

    int product = factorial(n);
    printf("%d\n",product);
    return 0;
}