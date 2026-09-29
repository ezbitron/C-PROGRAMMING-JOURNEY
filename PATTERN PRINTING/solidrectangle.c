#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

     int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);

    // ********...... upto n number of stars

    for (int i = 1; i <= n; i++) // outer loop -> no of lines or no of rows
    {

        for (int j = 1; j <= m; j++) // inner loop -> no of stars in each line or no of columns
        {
            printf("* ");
        }
        printf("\n"); // one enter after each line
    }
    return 0;
}