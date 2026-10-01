#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d", &a);

     int b;
    printf("Enter a number :\n");
    scanf("%d", &b);

    int power=1;

    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("The power is %d",power);
   
    

    return 0;
}