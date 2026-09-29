#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 2, 1, 2, 1};
    int i = 0;
    int j = 6;
    int isPalindrome = 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("Array is a palindrome");
    }
    else
    {
        printf("Array is not a palindrome");
    }

    return 0;
}