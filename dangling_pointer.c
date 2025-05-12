#include <stdio.h>

int *dangling_pointer(void) {
    int n = 30;
    return &n;
}

int main(void) {
    int *p = dangling_pointer();

    printf("p: %p\n", p);

    p = NULL;
    return 0;
}
