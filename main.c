#include <stdio.h>
#define MAX_ARRAY_LENGTH 100

void sum(const char *arrLength, int *sumNumber) {
    *sumNumber = (*arrLength) * (*arrLength + 1) / 2;
}

int main(void) {
    int sumArr = 0;
    const char arrLength = MAX_ARRAY_LENGTH;

    sum(&arrLength, &sumArr);

    printf("sumArr: %d\n", sumArr);
    return 0;
}
