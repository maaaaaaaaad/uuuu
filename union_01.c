#include <stdio.h>

struct su_t {
    unsigned char age;
    unsigned long long id;
};

union un_t {
    unsigned char age;
    unsigned long long id;
};

int main(void) {
    struct su_t su = {0};
    union un_t un = {0};

    printf("sizeof(su) = %lu\n", sizeof(su));
    printf("sizeof(un) = %lu\n", sizeof(un));

    return 0;
}
