#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 10;
    int arr[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 31 + 10;
        printf("%d ", arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
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
