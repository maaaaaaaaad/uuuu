#include <stdio.h>
#define MAX_ARRAY_LENGTH 100

void sum(int *arr, const char *arrLength, int *sumNumber) {
    for (char i = 0; i < *arrLength; i++) {
        arr[i] = i + 1;
        *sumNumber += arr[i];
    }
}

int main(void) {
    int arr[MAX_ARRAY_LENGTH] = {0};
    int sumArr = 0;
    const char arrLength = MAX_ARRAY_LENGTH;

    sum(&arr[0], &arrLength, &sumArr);

    printf("sumArr: %d\n", sumArr);
    return 0;
}
