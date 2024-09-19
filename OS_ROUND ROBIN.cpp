#include <stdio.h>

struct Process 
{
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

void roundRobinScheduling(struct Process processes[], int n, int time_quantum) 
{
    int current_time = 0;
    int remaining_processes = n;

    while (remaining_processes > 0) 
	{
        for (int i = 0; i < n; i++) 
		{
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0) 
			{
                int execute_time = (processes[i].remaining_time < time_quantum) ? processes[i].remaining_time : time_quantum;
                processes[i].remaining_time -= execute_time;
                current_time += execute_time;

                if (processes[i].remaining_time == 0) 
				{
                    remaining_processes--;
                    processes[i].completion_time = current_time;
                    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
                }
            }
        }
    }
}

int main() 
{
    int n, time_quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("\n");
    struct Process processes[n];

    printf("Enter arrival time and burst time for each process:\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < n; i++) 
	{
        processes[i].id = i + 1;
        printf("___Process %d:___\n", i + 1);
        printf("Enter the Arrival Time :-  ");
        scanf("%d", &processes[i].arrival_time);
        printf("Enter the Burst Time :-  ");
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
        processes[i].completion_time = -1; // Initialize completion_time to -1 (not completed yet)
        printf("\n");
    }

    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);

    roundRobinScheduling(processes, n, time_quantum);

    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");

    for (int i = 0; i < n; i++) 
	{
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].completion_time,
               processes[i].turnaround_time, processes[i].waiting_time);
    }

    return 0;
}

