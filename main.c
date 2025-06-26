#include <stdio.h>
#define MAX_ARR_LENGTH 100

void sumResult(const int *arrLength, int *result)
{
    *result = *arrLength * (*arrLength + 1) / 2;
}


int main(void)
{
    const int arrLength = MAX_ARR_LENGTH;
    int result = 0;

    sumResult(&arrLength, &result);

    printf("result: %d\n", result);
    return 0;
}
