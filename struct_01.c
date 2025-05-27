#include <stdio.h>

typedef struct commonAttributes {
    int createdAt;
    int updatedAt;
    int deletedAt;
} CommonAttributes;

typedef struct member {
    char id[10];
    char name[5];
    int8_t age;
    CommonAttributes commonAttributes;
} Member;

int main(void) {
    Member member = {0};

    printf("&member: %p\n", &member);
    printf("sizeof(member): %lu bytes\n", sizeof(member));
    return 0;
}
