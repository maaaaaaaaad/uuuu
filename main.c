#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], const int left, const int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

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
    const int CUTOFF = 16;
    if (right - left <= CUTOFF)
    {
        insertionSort(arr, left, right);
        return;
    }

    const int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid, temp);
    mergeSort(arr, mid + 1, right, temp);

    merge(arr, left, mid, right, temp);
}

void sortArray(int arr[], const int size)
{
    if (arr == NULL || size <= 1)
    {
        return;
    }

    int *temp = malloc(size * sizeof(int));
    if (!temp)
    {
        fprintf(stderr, "Error: Memory allocation failed in sortArray.\n");
        return;
    }

    mergeSort(arr, 0, size - 1, temp);

    free(temp);
}

int main()
{
    const int size = 10;
    int *arr = malloc(size * sizeof(int));

    if (!arr)
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

    sortArray(arr, size);

    printf("\nSorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
