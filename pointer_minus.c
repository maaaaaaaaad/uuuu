#include <stdio.h>

int main(void) {
    const int *p1 = (int *) 0x100;
    const int *p2 = (int *) 0x104;

    const int diff = p2 - p1;

    printf("%d\n", diff);

    return 0;
}
