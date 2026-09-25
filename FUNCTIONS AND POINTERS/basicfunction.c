#include<stdio.h>
void greet() // 2
{
    printf("Good Morning\n"); // 3
    printf("How are you ?\n"); // 4
    return; // function finished / 5
}
int main(){
    greet(); // function call / 1
    return 0;
}