#include <stdbool.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    const int n = sizeof(arr) / sizeof(arr[0]);

    int stack[32];
    int top = -1;
    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0)
    {
        const int right = stack[top--];
        const int left = stack[top--];

        const int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j < right; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                const int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        const int temp = arr[i + 1];
        arr[i + 1] = arr[right];
        arr[right] = temp;

        const int partition = i + 1;

        if (partition - 1 > left)
        {
            stack[++top] = left;
            stack[++top] = partition - 1;
        }

        if (partition + 1 < right)
        {
            stack[++top] = partition + 1;
            stack[++top] = right;
        }
    }

    return 0;
}
