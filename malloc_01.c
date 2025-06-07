#include <stdio.h>
#include <stdlib.h>
#define safeFree(p) if(p) {free(p); p = NULL;}

int main(void)
{
    const char memSize = sizeof(char);
    char *p = malloc(memSize);
    safeFree(p);
    return 0;
}
