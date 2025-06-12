#include <stdio.h>

typedef struct
{
    unsigned char age;
    unsigned long long id;
} MemberStruct;

typedef union
{
    unsigned char age;
    unsigned long long id;
} MemberUnion;

int main(void)
{
    MemberStruct su = {0};
    MemberUnion un = {0};

    printf("sizeof(su) = %lu\n", sizeof(su));
    printf("sizeof(un) = %lu\n", sizeof(un));

    return 0;
}
