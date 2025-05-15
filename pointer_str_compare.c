#include <stdio.h>

int main(void) {
    const char *p1 = "abc";
    const char *p2 = "abc";

    printf("%s\n", (p1 == p2) ? "true" : "false");

    const char *p3[3] = {"a", "b", "c"};
    const char *p4[3] = {"a", "b", "c"};

    printf("%s\n", (p3 == p4) ? "true" : "false");

    return 0;
}
