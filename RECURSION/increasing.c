// extra parameter & reverse recursion
#include <stdio.h>
void increase(int x, int n)
{
    if (x>n)
        return;
    printf("%d\n", x);
    increase(x+1, n);

    return;
}
int main()
{
    int n = 5;
    increase(1,n);
    return 0;
}


// #include <stdio.h>
// void increase(int n)
// {
//     if (n == 0)
//         return;
//     increase(n - 1);
//     printf("%d\n", n);

//     return;
// }
// int main()
// {
//     int n = 5;
//     increase(n);
//     return 0;
// }