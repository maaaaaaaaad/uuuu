#include<stdio.h>
#define MAX_ARRAY_LENGTH 100

int main(void)
{
    int arr[MAX_ARRAY_LENGTH] = {0};
    int *arrPtr = &arr[0];
    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        *arrPtr = i + 1;
        *arrPtr++;
    }
    return 0;
}
