#include <stdio.h>
int main()
{
    int n;
    printf("Enter the marks of the student\n");
    scanf("%d", &n);

    if (n > 89 && n <= 100)
    {
        printf("Exellent");
    }
    else if (n > 79 && n <= 90)
    {
        printf("Very Good");
    }
    else if (n > 69 && n <= 80)
    {
        printf("Good");
    }
    else if (n > 59 && n <= 70)
    {
        printf("Can Do Better");
    }
    else if (n > 49 && n <= 60)
    {
        printf("Average");
    }
    else if (n > 39 && n <= 50)
    {
        printf("Below Average");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}