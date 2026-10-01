#include <stdio.h>
int main()
{
    int n; 
    printf("Enter the Year : "); 
    scanf("%d", &n); 
    if (n % 4 == 0) 
    {
        printf("Yes! %d is a leap year", n);
    }
    else 
    {
        printf("No! %d is not a leap year", n);
    }
    return 0;
}