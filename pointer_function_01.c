#include <stdio.h>

char copyValues(char x, char y) {
    const char tmp = x;
    x = y;
    y = tmp;

    return 0;
}

int main() {
    const char x = 5;
    const char y = 10;
    copyValues(x, y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}
