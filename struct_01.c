#include <stdio.h>

struct member {
    char id[10];
    char name[5];
};

int main(void) {
    struct member member;

    printf("&member: %p\n", &member);
    return 0;
}
