#include <stdio.h>
#define DEFAULT_VALUE 100

unsigned int sum(unsigned int value);

int main(void) {
    const unsigned int value = DEFAULT_VALUE;
    printf("%u\n", sum(value));
    return 0;
}

unsigned int sum(const unsigned int value) {
    unsigned int hap = 0;
    for (unsigned int i = 1; i <= value; i++) {
        hap = hap + i;
    }
    return hap;
}
