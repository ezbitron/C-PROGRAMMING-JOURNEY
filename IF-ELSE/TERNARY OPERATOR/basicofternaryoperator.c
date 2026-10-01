// Ternary Operator (?:)
// Short form of if-else statement.

// Syntax:
// condition ? expression_if_true : expression_if_false;

// Example:
// int max = (a > b) ? a : b;

// If (a > b) is true, max = a.
// Otherwise, max = b.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);

    n%2==0 ? printf("Even Number") : printf("odd number");


    return 0;
}