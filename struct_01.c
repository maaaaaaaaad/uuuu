#include <stdio.h>

struct member {
    char id[10];
    char name[5];
    int8_t age;
};

int main(void) {
    struct member member = {0};

    printf("&member: %p\n", &member);
    return 0;
}
