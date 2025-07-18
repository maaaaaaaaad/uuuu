#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 10;
    int arr[size];

    srand((unsigned int) time(NULL));

    printf("Original: ");
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 31) + 10;
        printf("%d ", arr[i]);
    }

    for (int i = 1, j, key; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        for (; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }

    printf("\nSorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
