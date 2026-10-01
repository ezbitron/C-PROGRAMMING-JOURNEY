#include <stdio.h>
int main()
{
    // bool x = true means 1
    //  and false means 0

    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    printf("\nx = %d y = %d z = %d",x,y,z);
    return 0;
}