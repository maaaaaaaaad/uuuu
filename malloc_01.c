#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char memSize = sizeof(char);
    char *p = malloc(memSize);
    printf("%p\n", p);
    free(p);


    return 0;
}
