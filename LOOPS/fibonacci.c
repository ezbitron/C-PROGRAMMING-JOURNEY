/* Write a function to calculate the nth fibonacci number
using recursion */

#include <stdio.h>
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
    
}
int main()
{
    int n = 9;
    // int x = fibo(n);
    printf("%d", fibo(n));
    return 0;
}






// #include <stdio.h>

// void series(int n)
// {
//     int a = 1;
//     int b = 1;
//     int sum;

//     for(int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);

//         sum = a + b;
//         a = b;
//         b = sum;
//     }
// }

// int main()
// {
//     int n;

//     printf("Enter a number : ");
//     scanf("%d", &n);

//     series(n);

//     return 0;
// }