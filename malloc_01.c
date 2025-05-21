#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const int size = 3 * sizeof(int);
    int *pi = malloc(size);

    memset(pi, 0, size);

    free(pi);


    return 0;
}
