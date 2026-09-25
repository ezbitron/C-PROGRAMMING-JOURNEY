#include<stdio.h>
int main()
{
    int i = 2*3/4+4/4+8-2+5/8;
    printf("%d",i);
    return 0;
}


/*
Q. In b = 6.6 / a + 2 * n;
   Which operation will be performed first?

✓ (1) 6.6 / a
   // Correct: Division (/) and multiplication (*) have the same precedence.
   // Since they have equal precedence, the left-to-right associativity rule applies.
   // Therefore, 6.6 / a is evaluated before 2 * n.

✗ (2) a + 2
   // Incorrect: Addition (+) has lower precedence than / and *.

✗ (3) 2 * n
   // Incorrect: Although * has the same precedence as /,
   // it comes after 6.6 / a, so it is evaluated second.

✗ (4) Depends upon compiler
   // Incorrect: Operator precedence and associativity are defined
   // by the C language, not by the compiler.
*/







