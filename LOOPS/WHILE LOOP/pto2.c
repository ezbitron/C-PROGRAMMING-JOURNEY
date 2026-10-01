#include <stdio.h>
int main()
{
    int i=1;

    while(i<=10); // because of this semicolon this condition is true forever
    // so it is stuck in infinite loop and never reach to next statements that is printf and increments
    {
        printf("\n%d",i);
        i++;
    }

    return 0;
}