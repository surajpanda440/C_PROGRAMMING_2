#include <stdio.h>

struct Process 
{
    int id;
    int arrival_time;
    int burst_time;
    int priority;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

void calculateTimes(struct Process processes[], int n) 
{
    int current_time = 0;
    int remaining_processes = n;

    while (remaining_processes > 0) 
	{
        int highest_priority = -1;
        int selected_process = -1;

        for (int i = 0; i < n; i++) 
		{
            if (processes[i].arrival_time <= current_time && processes[i].priority > highest_priority && processes[i].completion_time == -1) 
			{
                highest_priority = processes[i].priority;
                selected_process = i;
            }
        }

        if (selected_process == -1) 
		{
            current_time++;
        } else 
		{
            processes[selected_process].completion_time = current_time + processes[selected_process].burst_time;
            processes[selected_process].turnaround_time = processes[selected_process].completion_time - processes[selected_process].arrival_time;
            processes[selected_process].waiting_time = processes[selected_process].turnaround_time - processes[selected_process].burst_time;

            current_time = processes[selected_process].completion_time;
            remaining_processes--;
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of processes :- ");
    scanf("%d", &n);

    struct Process processes[n];

    printf("Enter arrival time, burst time, and priority for each process:\n");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) 
	{
        processes[i].id = i + 1;
        printf("___Process %d:___\n", i + 1);
        printf("Enter the Arrival Time :-  ");
        scanf("%d", &processes[i].arrival_time);
        printf("Enter the Burst Time :-  ");
        scanf("%d", &processes[i].burst_time);
        printf("Enter the Priority :-  ");
        scanf("%d", &processes[i].priority);
        processes[i].completion_time = -1;
		printf("\n"); 
    }

    calculateTimes(processes, n);

    printf("\nProcess\tArrival Time\tBurst Time\tPriority\tCompletion Time\tTurnaround Time\tWaiting Time\n");

    for (int i = 0; i < n; i++) 
	{
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].priority,
               processes[i].completion_time, processes[i].turnaround_time,
               processes[i].waiting_time);
    }

    return 0;
}

