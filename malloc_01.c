#include <stdio.h>
#include <stdlib.h>
#define safeFree(p) if(p) {free(p); p = NULL;}
#define fieldsSize 5

int main(void)
{
    int *scores = (int *) malloc(fieldsSize * sizeof(int));

    if (scores == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < fieldsSize; i++)
    {
        printf("Input field %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    safeFree(scores);
    return 0;
}
