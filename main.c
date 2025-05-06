#include <stdio.h>

int main(void) {
    const int arr[3] = {0};

    int *arr_ptr = arr;
    arr_ptr++;
    *arr_ptr = 1;

    return 0;
}
