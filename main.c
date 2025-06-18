#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int students = 0;
    printf("students: ");
    scanf("%d", &students);

    int *studentsScores = (int *) malloc(students * sizeof(int));

    if (studentsScores == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    free(studentsScores);
    return 0;
}
