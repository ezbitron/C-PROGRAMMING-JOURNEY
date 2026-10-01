#include <stdio.h>
int main()
{
    float r;
    float PI =3.14;
    printf("Enter radius of a circle : ");
    scanf("%f",&r); // we are taking input from scanf()
    float A = PI*r*r;
    printf("Area of a circle is : %f",A);

    return 0;
}