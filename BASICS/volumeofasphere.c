/* Volume of a sphere */

#include <stdio.h>
int main()
{
    float r;
    float PI =3.14;
    printf("Enter a number : ");
    scanf("%f",&r);
    float v = 4*PI*r*r*r/3;
    printf("Volume of a sphere is : %f",v);

    return 0;
}