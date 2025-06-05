#include <stdio.h>

void sum(int *arr, const char *arrLength) {
    for (char i = 0; i < *arrLength; i++) {
        arr[i] = i + 1;
    }
}

int main(void) {
    int arr[3] = {0};
    const char arrLength = sizeof(arr) / sizeof(arr[0]);

    sum(&arr[0], &arrLength);
    for (char i = 0; i < arrLength; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
