#include <stdio.h>

void printValue(void *data, const char type)
{
    switch (type)
    {
        case 'i':
            printf("Integer: %d\n", *(int *) data);
            break;
        case 'f':
            printf("Float: %.2f\n", *(float *) data);
            break;
        case 'c':
            printf("Char: %c\n", *(char *) data);
            break;
        default:
            printf("Unsupported type\n");
            break;
    }
}

int main()
{
    int intValue = 10;
    float floatValue = 3.14f;
    char charValue = 'X';

    printValue(&intValue, 'i');
    printValue(&floatValue, 'f');
    printValue(&charValue, 'c');

    return 0;
}
