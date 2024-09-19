#include <stdio.h>

struct Process 
{
    int id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

void calculateTimes(struct Process processes[], int n) {
    int current_time = 0;
    int remaining_processes = n;
    int shortest_process = -1;
    int shortest_burst_time = 999999; // A high initial value

    while (remaining_processes > 0) {
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].burst_time < shortest_burst_time && processes[i].completion_time == -1) {
                shortest_burst_time = processes[i].burst_time;
                shortest_process = i;
            }
        }

        if (shortest_process == -1) {
            current_time++;
        } else {
            processes[shortest_process].completion_time = current_time + processes[shortest_process].burst_time;
            processes[shortest_process].turnaround_time = processes[shortest_process].completion_time - processes[shortest_process].arrival_time;
            processes[shortest_process].waiting_time = processes[shortest_process].turnaround_time - processes[shortest_process].burst_time;

            current_time = processes[shortest_process].completion_time;
            remaining_processes--;
            shortest_burst_time = 999999; // Reset shortest_burst_time for the next iteration
        }
    }
}

int main() {
    int n;

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
        processes[i].completion_time = -1; // Initialize completion_time to -1 (not completed yet)
        printf("\n");
    }

    calculateTimes(processes, n);

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

