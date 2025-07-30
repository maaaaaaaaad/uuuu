#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static inline void swap(int *const a, int *const b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}

static void selectionSort(int *const arr, const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

static void sortArray(int *const arr, const int size)
{
    selectionSort(arr, size);
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
