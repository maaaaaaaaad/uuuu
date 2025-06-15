#include<stdio.h>

int main(void)
{
    int arr[4] = {3, 2, 1, 4};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            const int tmp = arr[j];
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
