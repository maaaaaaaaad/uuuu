#include <stdio.h>

int main(void)
{
    const int *p1 = (int *) 0x100;
    const int *p2 = (int *) 0x104;

    const int diff = p2 - p1;

    printf("%d\n", diff);

    const long *p3 = (long *) 0x1000;
    const long *p4 = (long *) 0x1008;

    const long diff2 = p4 - p3;

    printf("%ld\n", diff2);

    return 0;
}
