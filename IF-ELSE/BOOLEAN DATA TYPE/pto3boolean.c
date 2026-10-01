#include <stdio.h>
int main()
{
    // bool x = true means 1
    //  and false means 0

   int k = 35 ;
   printf("\n%d %d %d",k==35,k=50,k>40);
    return 0;
}   // this code answer is wrong due to unidetified modification 

/* so use this code

#include <stdio.h>

int main()
{
    int k = 35;

    printf("%d ", k == 35);  // 1

    k = 50;

    printf("%d ", k);        // 50
    printf("%d", k > 40);    // 1

    return 0;
}
    */


    /* another question corrected version
    #include <stdio.h>

int main()
{
    int x = 15;

    printf("%d ", x != 15);  // 0

    x = 20;

    printf("%d ", x);        // 20
    printf("%d", x < 30);    // 1

    return 0;
}
    */