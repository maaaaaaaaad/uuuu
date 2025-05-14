#include <stdio.h>

int main(void) {
    const char str[] = "Hello, World!";
    const char *p = str;

    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }

    return 0;
}
