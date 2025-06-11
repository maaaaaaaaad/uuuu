#include <stdio.h>
#define MAX_ARRAY_LENGTH 100

void sumFor(int *arrAddress, int *sumResult)
{
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        arrAddress[i] += i + 1;
        *sumResult += arrAddress[i];
    }
}

int main(void)
{
    int arr[MAX_ARRAY_LENGTH] = {0};
    int sumResult = 0;
    sumFor(&arr[0], &sumResult);
    printf("sumResult: %d\n", sumResult);
    return 0;
}
