#include <stdio.h>
#include <stdlib.h>
#define safeFree(p) if(p) {free(p); p = NULL;}

void studentAverageScore(const int *students, const int *studentsScore, int *averageScore)
{
    for (int i = 0; i < *students; i++)
    {
        *averageScore += studentsScore[i];
    }
    *averageScore /= *students;
}

int main(void)
{
    int students = 0;
    int averageScore = 0;
    printf("students: ");
    scanf("%d", &students);

    int *studentsScores = (int *) malloc(students * sizeof(int));

    if (studentsScores == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < students; i++)
    {
        printf("studentsScores[%d]: ", i);
        scanf("%d", &studentsScores[i]);
    }

    printf("\nStudents Scores:\n");
    for (int i = 0; i < students; i++)
    {
        printf("Student %d: %d Score\n", i + 1, studentsScores[i]);
    }

    studentAverageScore(&students, &studentsScores[0], &averageScore);

    printf("\nAverage Score: %d\n", averageScore);

    safeFree(studentsScores);
    return 0;
}
