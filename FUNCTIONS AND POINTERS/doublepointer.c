#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; // holds a ka address
    int** y = &x; // holds pointer's address AND integer ka address store karta hai

    printf("%p\n",&x);
    printf("%d\n",**y);
    return 0;

}