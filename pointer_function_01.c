#include <stdio.h>

void copyValues(char x, char y)
{
    const char tmp = x;
    x = y;
    y = tmp;
}

void ptrValues(char *x, char *y)
{
    const char tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    char x = 5;
    char y = 10;
    copyValues(x, y);
    printf("copyValues = x: %d, y: %d\n", x, y);


    ptrValues(&x, &y);
    printf("ptrValues = x: %d, y: %d\n", x, y);

    return 0;
}
