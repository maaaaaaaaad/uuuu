#include<stdio.h>
#define MAX_ARRAY_LENGTH 100

void setArrayList(int *arrPtr)
{
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        *arrPtr = i + 1;
        *arrPtr++;
    }
}

int main(void)
{
    int arr[MAX_ARRAY_LENGTH] = {0};
    setArrayList(&arr[0]);
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
