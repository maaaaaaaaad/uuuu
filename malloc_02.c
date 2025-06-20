#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_LENGTH 100
#define safeFree(p) if(p) {free(p); p = NULL;}

int main(void)
{
    int *score = (int *) malloc(sizeof(int) * MAX_ARRAY_LENGTH);

    for (int i = 0; i < MAX_ARRAY_LENGTH; i++)
    {
        score[i] = i + 1;
        printf("%d\n", score[i]);
    }

    safeFree(score);
    return 0;
}
