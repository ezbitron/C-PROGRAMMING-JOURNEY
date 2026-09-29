#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++) // no of rows -> i
    {
        int a=1;
        for (int j = 1; j <= i; j++) // no of columns -> j
        {
            int d = a+64; // for 65 ascii
            char ch = (char)d; // type casting
            printf("%c ", ch); // to print the character
            a++;
        }
        printf("\n");
    }
    return 0;
}