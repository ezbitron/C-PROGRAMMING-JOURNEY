/*
 char data type is used to store alphabets for example a,b,c etc
syntax of char data type =
char ch = 'a';
 */
#include<stdio.h>
int main()
{
   char ch = 'a';
   printf("%d\n",ch); // %d is used to print the ASCII VALUE OF CHARACTER
   printf("%c",ch); // %c is used to print the character 
    return 0;
}


/* ASCII VALUES ALSO INCLUDED IN THIS PROGRAM */


/*
Q. Which of the following is NOT a character constant?

✗ (1) 'Thank You'
   // Invalid: A character constant can contain only one character.

✗ (2) 'Enter values of P, N, R'
   // Invalid: Contains multiple characters (a string written with single quotes).

✗ (3) '23.56E-03'
   // Invalid: A numeric value with multiple characters, not a single character.

✓ (4) All the above
   // Correct Answer: All of the above are NOT character constants.
*/