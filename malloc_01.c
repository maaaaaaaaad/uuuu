#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int *pi = malloc(10);
    printf("%p\n", pi);

    return 0;
}
