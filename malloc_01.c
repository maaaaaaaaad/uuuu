#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        pi[i] = i + 1;
    }

    free(pi);


    return 0;
}
