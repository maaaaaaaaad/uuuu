#include <stdio.h>
#define MAX_ARRAY_LENGTH 100

int sumFor(int *arrArgs, int *sumResult)
{
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        arrArgs[i] = i + 1;
        *sumResult += arrArgs[i];
    }
    return *sumResult;
}

int sumDoWhile(int *arrArgs, int *sumResult)
{
    int i = 0;
    do
    {
        arrArgs[i] = i + 1;
        *sumResult += arrArgs[i];
        i++;
    } while (i < MAX_ARRAY_LENGTH);
    return *sumResult;
}

int main(void)
{
    int *arr[MAX_ARRAY_LENGTH] = {0};
    int sumResult = 0;
    sumFor(arr, &sumResult);
    printf("sumResult: %d\n", sumResult);
    return 0;
}
