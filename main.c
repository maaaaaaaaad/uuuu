#include <stdio.h>

typedef struct
{
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
} Process;

void findAverageTime(Process *process, const int length)
{
    process[0].waiting_time = 0;
    process[0].turnaround_time = process[0].burst_time;

    for (int i = 1; i < length; i++)
    {
        process[i].waiting_time = process[i - 1].waiting_time + process[i - 1].burst_time;
        process[i].turnaround_time = process[i].waiting_time + process[i].burst_time;
    }

    float total_wt = 0;
    float total_tat = 0;

    printf("P_ID\tBurst\tWait\tTurnaround\n");
    for (int i = 0; i < length; i++)
    {
        total_wt += (float) process[i].waiting_time;
        total_tat += (float) process[i].turnaround_time;
        printf("%d\t%d\t%d\t%d\n", process[i].pid, process[i].burst_time, process[i].waiting_time,
               process[i].turnaround_time);
    }

    printf("Average waiting time = %.2f\n", total_wt / (float) length);
    printf("Average turnaround time = %.2f\n", total_tat / (float) length);
}

int main()
{
    Process proc[] = {{1, 24}, {2, 3}, {3, 3}};
    int n = sizeof(proc) / sizeof(proc[0]);
    findAverageTime(proc, n);
    return 0;
}
