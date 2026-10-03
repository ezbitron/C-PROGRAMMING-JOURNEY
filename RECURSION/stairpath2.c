#include <stdio.h>
int stair(int n)
{
    if(n==1) return 1; // alternative n==1 || n==2 return n;
    if(n==2) return 2; // very easy
    if(n==3) return 4;
   int totalways = stair(n-1) + stair(n-2) + stair(n-3);
   return totalways;
}
int main()
{
    int n = 4;
    // int x = fibo(n);
    printf("%d", stair(n));
    return 0;
}
