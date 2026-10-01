#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i = i + 1) // int i scope is only inside for curly braces
    {
        printf("Hello\n");
    }
        printf("%d",i);


    return 0;
}