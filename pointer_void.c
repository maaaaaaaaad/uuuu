#include <stdio.h>

int main(void) {
    const int arr[3] = {0};
    const float f = 0.0f;

    const void *p1 = arr;
    const void *p2 = &f;

    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);

    p1++;

    printf("p1++: %p\n", p1);

    return 0;
}
