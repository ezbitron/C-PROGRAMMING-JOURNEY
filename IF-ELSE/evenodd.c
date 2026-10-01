/* take positive integer input and tell if it is even or odd */


#include <stdio.h>
int main()
{
    int n; // container ban gaya
    printf("Enter a number : "); // output screen 
    scanf("%d", &n); // for input
    if (n % 2 == 0) // for even condition
    {
        printf("%d is an even number", n);
    }
    else // for else
    {
        printf("%d is an odd nummber", n);
    }
    return 0;
}