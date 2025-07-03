#include <stdbool.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    const int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        int k = i;
        int v = arr[k];
        bool heap = false;

        while (!heap && 2 * k + 1 < n)
        {
            int j = 2 * k + 1;
            if (j + 1 < n)
                if (arr[j] < arr[j + 1])
                    j = j + 1;
            if (v >= arr[j])
                heap = true;
            else
            {
                arr[k] = arr[j];
                k = j;
            }
        }
        arr[k] = v;
    }

    for (int i = n - 1; i > 0; i--)
    {
        const int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        int k = 0;
        int v = arr[k];
        bool heap = false;

        while (!heap && 2 * k + 1 < i)
        {
            int j = 2 * k + 1;
            if (j + 1 < i)
                if (arr[j] < arr[j + 1])
                    j = j + 1;
            if (v >= arr[j])
                heap = true;
            else
            {
                arr[k] = arr[j];
                k = j;
            }
        }
        arr[k] = v;
    }

    return 0;
}
