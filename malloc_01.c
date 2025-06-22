#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define safeFree(p) if(p) {free(p); p = NULL;}
#define fieldsSize 5

int safeReadInt(const char *prompt, int *result)
{
    char input[100];
    char *endPtr;

    printf("%s", prompt);

    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        return 0;
    }

    input[strcspn(input, "\n")] = 0;

    if (strlen(input) == 0)
    {
        printf("Empty input\n");
        return 0;
    }
    const long value = strtol(input, &endPtr, 10);

    if (endPtr == input)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (*endPtr != '\0')
    {
        printf("Invalid input\n");
        return 0;
    }

    if (value > INT_MAX || value < INT_MIN)
    {
        printf("Value out of range\n");
        return 0;
    }

    *result = (int) value;
    return 1;
}

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
        char prompt[50];
        snprintf(prompt, sizeof(prompt), "Input field %d: ", i + 1);

        while (!safeReadInt(prompt, &scores[i]))
        {
            printf("Invalid input\n");
        }
    }
    printf("\n scores:\n");
    for (int i = 0; i < fieldsSize; i++)
    {
        printf("Field %d: %d\n", i + 1, scores[i]);
    }

    safeFree(scores);
    return 0;
}
