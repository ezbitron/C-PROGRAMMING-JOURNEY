#include <stdio.h>
int main()
{
   int n=1234;
   int r=0;
   int ld;
   while(n>0){
    r =  r*10;
    r = r + (n%10);

    n=n/10;
   }
   printf("%d",r);
    return 0;
}