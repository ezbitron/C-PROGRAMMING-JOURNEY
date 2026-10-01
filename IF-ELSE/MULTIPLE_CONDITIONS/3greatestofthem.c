#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number\n");
    scanf("%d",&a);

    int b;
    printf("Enter the second number\n");
    scanf("%d",&b);


    int c;
    printf("Enter the third number\n");
    scanf("%d",&c);

   if(a==b==c)
   {
    printf("All three are equal");
   }
   else if(a>b && a>c)
   {
    printf("A is greatest");
   }
   else if(b>a && b>c){
    printf("B is greatest");
   }
   else {
    printf("C is greatest");
    return 0;
  }
}