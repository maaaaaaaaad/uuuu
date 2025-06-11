#include <stdio.h>
#define MAX_ARRAY_LENGTH 100

void sumFor(const char *arrFirstIndex, int *sumResult)
{
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        *sumResult += arrFirstIndex[i];
    }
}

int main(void)
{
    return 0;
}
