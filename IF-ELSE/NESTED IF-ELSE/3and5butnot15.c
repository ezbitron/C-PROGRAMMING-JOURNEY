#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);

    // if (n % 3 == 0 || n % 5 == 0)
    // {
    //     if (n % 15 != 0)
    //     {
    //         printf("Yes! it is divisible by 5 and 3 but not 15");
    //     }
    //     else
    //     {
    //         printf("No! it is not fulfill the condition");
    //     }
    // }
    // else
    // {
    //     printf("No! it is not fulfill the condition");
    // }

    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
    {
        printf("Yes! it is divisible by 5 and 3 but not 15");
    }
    else
    {
        printf("No! it is not fulfill the condition");
    }

    return 0;
}

// () > && > ||

// Logical Operators
// Used to combine or reverse conditions.
// Result is always True (1) or False (0).

// && (Logical AND)
// True only if both conditions are true.
// if (a > 0 && b > 0)

// || (Logical OR)
// True if at least one condition is true.
// if (a > 0 || b > 0)

// ! (Logical NOT)
// Reverses the result of a condition.
// if (!(a > 0))