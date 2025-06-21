#include <stdio.h>
#include <stdlib.h>
#define safeFree(p) if(p) {free(p); p = NULL;}
#define fieldsSize 5

int main(void)
{
    int *scores = (int *) malloc(fieldsSize * sizeof(int));

    for (int i = 0; i < fieldsSize; i++)
    {
        printf("Input field %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    safeFree(scores);
    return 0;
}
