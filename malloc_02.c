#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(char *str);

void printArr(void);

char **strArr;
int len = 2;
int pos = 0;

int main(void) {
    char input[50];
    const char intputLength = sizeof(input);

    strArr = malloc(len * sizeof(char *));

    printf("Enter strings: ");
    printf(">");

    while (strlen(fgets(input, intputLength, stdin))) {
        add(input);
        printf(">");
    }

    for (int i = 0; i < pos; i++) {
        free(strArr[i]);
    }

    free(strArr);

    return 0;
}
