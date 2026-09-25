#include<stdio.h>
int main (){
    int a=8;
    int b=7;
    int quo = a/b;

   int  r = a- (b*quo);
    printf("remainder is : %d\n",r);


    int z= a%b; // [ b> a then remainder becomes a]
    printf("remainder by modulo operator : %d",z);

    return 0;
}