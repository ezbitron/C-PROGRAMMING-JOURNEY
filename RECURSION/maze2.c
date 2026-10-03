#include <stdio.h>

int maze(int n, int m)
{
    int right = 0;
    int down = 0;
    if(n==1 && m==1) return 1;
    else if(n==1) {
        right +=  maze(n,m-1);
    }
    else if(m==1) {
        down += maze(n-1,m);
    }
    else if(n>1 && m>1){
        right +=  maze(n,m-1);
        down += maze(n-1,m);
    
    }
    
    
   int total = down + right;
   return total;
   
}
int main()
{
    int n;
    printf("Enter the number of rows of the maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns of the maze : ");
    scanf("%d", &m);

    int noOfWays = maze(n, m);
    printf("%d", noOfWays);

    return 0;
}