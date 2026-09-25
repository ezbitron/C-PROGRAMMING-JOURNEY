// #include<stdio.h>

// int main(){
//     void fun(); // function prototype
//     fun();
//     return 0;
// }

// void fun(){
//     printf("Hello");
// }

#include <stdio.h>
void england()
{
    printf("You are in England\n");
    return;
}

void india()
{
    printf("You are in India\n");
    void australia();
    australia(); // calling australia
    return;
}
void australia()
{
    printf("You are in Australia\n");
    england(); // calling england
    return;
}

int main()
{
    india(); // calling a india
    
    return 0;
}

