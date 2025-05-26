#include <stdio.h>
#include "modules/bundle/pointer_function_04.h"

int add(const int a, const int b) {
    return a + b;
}

int minus(const int a, const int b) {
    return a - b;
}

int main(void) {
    int (*pFunc[])(int, int) = {add, minus};
    const int pFuncLength = sizeof(pFunc) / sizeof(pFunc[0]);

    for (int i = 0; i < pFuncLength; i++) {
        printf("pFunc[%d]=%p, result: ", i, pFunc[i]);
        printf("%d\n", pFunc[i](1, 2));
    }

    return 0;
}
