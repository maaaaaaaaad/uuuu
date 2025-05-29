#include <stdio.h>

typedef struct {
    int date;
} Abstract;

typedef struct {
    int age;
    char name[10];
    Abstract abstract;
} Member;

int main(void) {
    return 0;
}
