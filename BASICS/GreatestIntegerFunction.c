/* take float input and print the fractional part of the real number. */
/* 
G.I.F means Greatest Integer Function. For Example : x = 7.1 so 
the greatest integer function of x is [x]=7
 */
#include<stdio.h>
int main (){
    float x;
    printf("Enter a decimal number : ");
    scanf("%f",&x);
    
    int y=x;

    float z= x-y;
    printf("Fractional part of your number is : %f",z);

    return 0;
}