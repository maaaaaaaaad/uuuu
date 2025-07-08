#include <stdbool.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    const int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        const int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    return 0;
}
