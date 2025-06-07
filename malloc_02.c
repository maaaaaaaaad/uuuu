#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(char *str);

void printArr(void);

char **strArr;
int len = 2;
int pos = 0;

int main(void)
{
    char input[50];
    const char intputLength = sizeof(input);

    strArr = malloc(len * sizeof(char *));

    printf("Enter strings: ");
    printf(">");

    while (strlen(fgets(input, intputLength, stdin)))
    {
        add(input);
        printf(">");
    }

    for (int i = 0; i < pos; i++)
    {
        free(strArr[i]);
    }

    free(strArr);

    return 0;
}

void add(char *str)
{
    char *tmp = malloc(sizeof(char) * strlen(str) + 1);
    char **newStarArr;

    if (pos >= len)
    {
        newStarArr = malloc(sizeof(char *) * len * 2);
        memcpy(newStarArr, strArr, len * sizeof(char *));
        free(strArr);
        strArr = newStarArr;
        len *= 2;
    }

    strcpy(tmp, str);
    strArr[pos++] = tmp;

    printArr();
}

void printArr(void)
{
    int i;
    printf("strArr=%p: [", strArr);

    for (int j = 0; j < pos; j++)
    {
        printf("%s", strArr[j]);
    }

    printf("] len=%d\n", len);
}
