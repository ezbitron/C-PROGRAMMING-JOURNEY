#include <stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 6;
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // for(int i = 0; i <= 6; i++){
    //     brr[i] = arr[6-i];
    // }
    // for(int i = 0; i <= 6; i++){
    //     arr[i] = brr[i];
    // }
    // for(int i = 0; i <= 6; i++){
    //     printf("%d ",brr[i]);
    // }
    // for(int i = 0; i <= 6; i++){
    //     printf("%d ",arr[i]);

    // }
    reverse(arr);

    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}