#include <stdio.h>

int main()
{
    const int size = 7;
    int hash[100] = {0};

    for (int i = 0; i < size; i++)
    {
        const int arr[] = {64, 34, 25, 12, 22, 11, 90};
        hash[arr[i]]++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (hash[i] > 0)
        {
            for (int j = 0; j < hash[i]; j++)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
