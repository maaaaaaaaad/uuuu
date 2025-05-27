#include <stdio.h>

struct member {
    char id[];
};

int main(void) {
    struct member member;

    printf("%s\n", member.id);
    return 0;
}
