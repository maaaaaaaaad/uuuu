#include <stdio.h>
#include "modules/add.h"

int main(void) {
    int (*pAdd)(int, int) = add;
    const int result = pAdd(1, 2);

    printf("%d\n", result);

    return 0;
}

int add(const int x, const int y) {
    return x + y;
}
