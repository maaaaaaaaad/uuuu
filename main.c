#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 10;
    int arr[size];
    int i;

    srand((unsigned int) time(NULL));

    printf("Original: ");
    for (i = 0; i < size; i++)
    {
        arr[i] = (rand() % 31) + 10;
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            const int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("\nSorted: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
