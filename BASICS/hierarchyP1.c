/*
Expression:
x = 4 + 2 % -8

Step 1:
The modulus (%) operator has higher precedence than (+).

So the expression becomes:

x = 4 + (2 % -8)

Step 2:
Find the remainder of 2 ÷ -8.

2 ÷ -8 = 0 remainder 2

Therefore,

2 % -8 = 2

Step 3:
x = 4 + 2
x = 6

Final Answer:
x = 6
*/
#include<stdio.h>
int main()
{
  int x= 4+2%-8;
  printf("%d\n",x);


  float z= 2/7.0;
  printf("%f",z);
    return 0;
}
