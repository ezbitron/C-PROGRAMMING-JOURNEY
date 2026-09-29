// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;

//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 != 0)   // Odd row
//             {
//                 printf("%d ", a);
//             }
//             else              // Even row
//             {
//                 char ch = a + 64;
//                 printf("%c ", ch);
//             }
//             a++;
//         }

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 6;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            // Odd row → numbers
            for(int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {
            // Even row → alphabets
            for(int j = 1; j <= i; j++)
            {
                printf("%c", 'A' + j - 1);
            }
        }

        printf("\n");
    }

    return 0;
}