#include <stdio.h>
int sum(int n)
{
    if (n == 0 || n == 1) // base case
        return n;
    int recAns = n + sum(n - 1);
    return recAns;
}
int main()
{
    int n = 2;
    int x = sum(n);
    printf("%d", x);
    return 0;
}


// #include <stdio.h>
// void sum(int n, int s)
// {
//     if (n == 0)
//     {
//         printf("%d", s);
//         return;
//     }
//     sum(n - 1, s + n);
// }
// int main()
// {
//     int n = 5;
//     sum(n, 0);
//     return 0;
// }

// #include <stdio.h>
// void sum(int n)
// {
//    int s = 0;
//    for(int i =1; i<=n; i++){
//     s = s + i;
//    }
//    printf("%d",s);
// }
// int main()
// {
//     int n = 5;
//     sum(n);
//     return 0;
// }
