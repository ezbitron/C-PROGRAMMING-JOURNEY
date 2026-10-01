/*The Real Thing

if(condition)
statement;

if(expression)
statement;
*/

#include <stdio.h>
int main()
{
    int a;
    char ch = 'a';

    
    if (3 + 2 % 5) // if true this runs even if it is not condition but expression also it is not 0
    {
        printf("This Works\n");
    }
    if (a = 10) // everything works except 0
    {
        printf("Even this works\n");
    }
    if (-5) // everything works except 0
    {
        printf("Surprisingly even this works\n");
    }
    if('a'){
        printf("sab kuch except 0 kyunki 0 is false\n");
    }
     if(ch == 'g'){
        printf("ab nahi hoga kyunki false hai");
    }

    
    return 0;
}
