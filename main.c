#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int students = 0;
    printf("students: ");
    scanf("%d", &students);

    int *arr = (int *) malloc(students * sizeof(int));
    free(arr);
    return 0;
}
