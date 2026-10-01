#include <stdio.h>
int main()
{
    int j; // since we are not giving any value to j
    // so it took garbage value and plays an ultimate role
    // to false the while condition because that garbage value is 345678 which
    // is always greater than 10 so code ends everytime 
    // there is a very rare chances of hitting while block

    while(j<=10){
        printf("\n%d",j);
        j++;
    }

    return 0;
}