#include <stdio.h>
int main()
{
    // bool x = true means 1
    //  and false means 0

    int a = 5, b, c;
    b = a = 15;
    c = a < 15;
    printf("\na = %d b = %d c = %d",a,b,c);
    return 0;
}