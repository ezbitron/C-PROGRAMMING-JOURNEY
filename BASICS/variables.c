#include <stdio.h>

// Variables and their Declaration
// Let us focus on int data type as of now.

/*
In mathematics, 
Variables and Literals
*/

/*
But in computer,
Variables as 
containers
like x,y,any_name etc
(used for storage)
*/

int main()
{
    int x; // in this x is an integer variable!

    x=3;    // initial value of x is 3 before updation

    printf("%d\n",x); /* in this statement %d is a format specifier of integer.
    also format specifier and escape sequence are not shown on output screen */

    x=5;    // after updation value is 5
    printf("%d\n",x);

    x= x+10; // we can also this type of expression for updation
    printf("%d",x);



    return 0;
}