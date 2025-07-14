#include <stdio.h>
#include <limits.h>
#include <secure/_string.h>

int main()
{
    const int size = 7;
    const int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_element) max_element = arr[i];
        if (arr[i] < min_element) min_element = arr[i];
    }

    const int hash_size = max_element - min_element + 1;
    int hash[hash_size];

    memset(hash, 0, sizeof(hash));

    for (int i = 0; i < size; i++)
    {
        hash[arr[i] - min_element]++;
    }

    for (int i = 0; i < hash_size; i++)
    {
        while (hash[i]--)
        {
            printf("%d ", i + min_element);
        }
    }

    return 0;
}
