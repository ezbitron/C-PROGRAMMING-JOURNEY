#include <stdio.h>

int missingNumber(int nums[], int numsSize)
{
    int sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum = sum + nums[i];
    }

    int sum2 = numsSize * (numsSize + 1) / 2;

    return sum2 - sum;
}

int main()
{
    int nums[] = {3, 0, 1};
    int numsSize = 3;

    int result = missingNumber(nums, numsSize);

    printf("Missing number = %d", result);

    return 0;
}