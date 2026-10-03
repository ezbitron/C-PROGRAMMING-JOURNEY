#include <stdio.h>
void decrease(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    decrease(n - 1);
    return;
}
int main()
{
    int n = 5;
    decrease(n);
    return 0;
}

// #include <stdio.h>
// int decrease(int n)
// {
//     if (n == 1) // base case
//         return 1;
//     printf("%d\n", n);
//     int recAns = decrease(n - 1);
//     return recAns;
// }
// int main()
// {
//     int n = 5;
//     int x = decrease(n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int decrease(int n)
// {
//     if (n == 1) // base case
//         return 1;
//     printf("%d\n", n);
//     int recAns = decrease(n - 1);
//     printf("%d\n", recAns); // imporant observation recAns = 1 after recursion

//     return recAns;
// }
// int main()
// {
//     int n = 5;
//     int x = decrease(n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// void greet(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Good Morning\n");
//     }
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     greet(n);
// }

// #include <stdio.h>
// void greet(int n)
// {
//     if(n==0) return;
//     printf("Good Morning\n");
//     greet(n-1);
// }
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     greet(n);
// }
