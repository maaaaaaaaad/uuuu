#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], const int left, const int mid, const int right, int temp[])
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        } else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], const int left, const int right, int temp[])
{
    if (left >= right)
    {
        return;
    }

    const int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid, temp);
    mergeSort(arr, mid + 1, right, temp);

    merge(arr, left, mid, right, temp);
}

int main()
{
    const int size = 10;
    int *arr = malloc(size * sizeof(int));
    int *temp = malloc(size * sizeof(int));

    if (!arr || !temp)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    srand((unsigned int) time(NULL));

    printf("Original: ");
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 31) + 10;
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, size - 1, temp);

    printf("\nSorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    free(temp);
    return 0;
}
