#include <stdio.h>

void change_string(char *str) {
    *str = 'x';
}

int main(void) {
    char str[] = "Hello, World!";

    printf("origin str: %s\n", str);

    change_string(str);

    printf("changed str: %s\n", str);

    return 0;
}
