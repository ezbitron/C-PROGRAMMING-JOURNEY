#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1) // base case
        return 1;
    int recAns = n * factorial(n - 1);
    return recAns;
}
int main()
{
    int n = 5;
    int x = factorial(n);
    printf("%d", x);
    return 0;
}
// #include <stdio.h>
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int n = 1;
//     int x = factorial(n);
//     printf("%d", x);
//     return 0;
// }