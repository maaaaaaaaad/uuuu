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
    char buffer[32];
    printf("students: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Error: input failed\n");
        return EXIT_FAILURE;
    }
    if (sscanf(buffer, "%d", &students) != 1 || students <= 0)
    {
        printf("Error: invalid input\n");
        return EXIT_FAILURE;
    }

    int *studentsScores = (int *) malloc(students * sizeof(int));

    if (studentsScores == NULL)
    {
        printf("Error: malloc failed\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < students; i++)
    {
        printf("studentsScores[%d]: ", i);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            printf("Error: input failed\n");
            safeFree(studentsScores);
            return EXIT_FAILURE;
        }
        if (sscanf(buffer, "%d", &studentsScores[i]) != 1)
        {
            printf("Error: invalid input\n");
            safeFree(studentsScores);
            return EXIT_FAILURE;
        }
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
