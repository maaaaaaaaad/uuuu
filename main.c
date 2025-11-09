#include <stdio.h>

int main(void) {
    const double x = 1.5;
    const double y = 2.5;
    const float z = 3.5f;
    const double a = x + y + z;

    printf("%f\n", a);
    return 0;
}
