#include <stdio.h>
#include <pthread.h>

void sort(int *arr, int arr_len)
{
}

int main()
{
    int arr[] = {5, 2, 6, 7, 3, 7, 3, 7, 8, 2, 8};
    int arr_len = sizeof(arr) / sizeof(int);

    sort(arr, arr_len);

    for (int i = 0; i < arr_len; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}