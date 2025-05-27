#include <stdio.h>

typedef struct member {
    char id[10];
    char name[5];
    int8_t age;
} Member;

int main(void) {
    Member member = {0};

    printf("&member: %p\n", &member);
    return 0;
}
