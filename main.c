typedef struct
{
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
} Process;

void findAverageTime(Process *process, int length)
{
    process[0].waiting_time = 0;
    process[0].turnaround_time = process[0].burst_time;
}

int main()
{
    return 0;
}
