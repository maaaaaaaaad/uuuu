#include <stdio.h>

int main(void) {
    const int arr[3] = {0};
    const int arr_length = sizeof(arr) / sizeof(arr[0]);

    int *arr_ptr = arr;
    arr_ptr++;
    *arr_ptr = 1;

    for (int i = 0; i < arr_length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
