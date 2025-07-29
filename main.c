#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static inline void swap(int *const a, int *const b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}

static int partition(int *const arr, const int low, const int high)
{
    const int pivot = arr[low + (high - low) / 2];
    int i = low - 1;
    int j = high + 1;

    while (1)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) return j;

        swap(&arr[i], &arr[j]);
    }
}

static void quickSort(int *const arr, const int low, const int high)
{
    while (low < high)
    {
        const int pi = partition(arr, low, high);

        if (pi - low < high - pi)
        {
            quickSort(arr, low, pi);
            quickSort(arr, pi + 1, high);
        } else
        {
            quickSort(arr, pi + 1, high);
            quickSort(arr, low, pi);
        }
    }
}

static void sortArray(int *const arr, const int size)
{
    if (arr == NULL || size <= 1)
    {
        return;
    }
    quickSort(arr, 0, size - 1);
}

int main(void)
{
    const int size = 10;
    int *const arr = malloc(size * sizeof(int));

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
