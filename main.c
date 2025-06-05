#include <stdio.h>

int main(void) {
    int arr[3] = {0};
    const char arrLength = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", arrLength);
    return 0;
}
