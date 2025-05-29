#include <stdio.h>

typedef struct {
    int date;
} Abstract;

typedef struct {
    int age;
    Abstract abstract;
    char name[10];
} Member;

int main(void) {
    const Member member = {0};

    printf("&member %p\n", &member);
    printf("sizeof(member) %lu\n", sizeof(member));
    return 0;
}
