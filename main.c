#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_array_size()
{
    char buffer[32];
    int size;

    while (1)
    {
        printf("(1-1000000): ");

        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            continue;
        }

        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }

        if (sscanf(buffer, "%d", &size) == 1 && size > 0 && size <= 1000000)
        {
            return size;
        }
    }
}

int main(void)
{
    const int n = get_array_size();

    int *array = (int *) malloc(n * sizeof(int));
    if (array == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
        if (i < n - 1) printf(", ");
    }

    free(array);

    return 0;
}
