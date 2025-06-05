#include <stdio.h>

int main(void) {
    int arr[3] = {0};
    const char arrLength = sizeof(arr) / sizeof(arr[0]);

    for (char i = 0; i < arrLength; i++) {
        arr[i] = i + 1;
        printf("%d\n", arr[i]);
    }
    return 0;
}
