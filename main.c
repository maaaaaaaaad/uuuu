#include <stdio.h>

int main()
{
    const int size = 7;
    const int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int max_element = arr[0];
    int min_element = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }

    int hash[max_element - min_element + 1];
    for (int i = 0; i < max_element - min_element + 1; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        hash[arr[i] - min_element]++;
    }

    for (int i = 0; i < max_element - min_element + 1; i++)
    {
        if (hash[i] > 0)
        {
            for (int j = 0; j < hash[i]; j++)
            {
                printf("%d ", i + min_element);
            }
        }
    }

    return 0;
}
