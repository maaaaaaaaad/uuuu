#include<stdio.h>

int partition(int *arr, const int low, const int high)
{
    const int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            const int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    const int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int *arr, const int low, const int high)
{
    if (low < high)
    {
        const int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void)
{
    int arr[4] = {3, 2, 1, 4};
    quickSort(&arr[0], 0, 3);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
