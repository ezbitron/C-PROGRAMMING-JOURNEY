/* Take positive integer input and tell if 
it is three digit number or not. */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    if(n>99 && n<1000){
        printf("It is a three digit number");
    }
    else{
        printf("it is not a three digit number");
    }

    return 0;
}