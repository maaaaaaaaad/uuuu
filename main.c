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

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\nMAX: %d", max);

    return 0;
}
