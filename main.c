#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(const int arr[], const int left, const int mid, const int right, int temp[])
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
        ((int *) arr)[i] = temp[i];
    }
}

void mergeSort(int arr[], const int left, const int right, int temp[])
{
    if (left < right)
    {
        const int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, temp);
        mergeSort(arr, mid + 1, right, temp);
        merge(arr, left, mid, right, temp);
    }
}

int main()
{
    const int size = 10;
    int arr[size];
    int temp[size];
    int i;

    srand((unsigned int) time(NULL));

    printf("Original: ");
    for (i = 0; i < size; i++)
    {
        arr[i] = (rand() % 31) + 10;
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, size - 1, temp);

    printf("\nSorted: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
