#include <stdio.h>

// Structure to represent a process
struct Process {
    int id;             // Process ID
    int arrival_time;   // Arrival time
    int burst_time;     // Burst time
    int remaining_time; // Remaining burst time
};

// Function to perform Round Robin scheduling
void roundRobin(struct Process processes[], int n, int quantum) {
    int time = 0; // Current time
    int completed = 0; // Number of processes completed

    while (completed < n) {
        for (int i = 0; i < n; i++) {
            if (processes[i].remaining_time > 0) {
                int execute_time = quantum;
                if (processes[i].remaining_time < quantum)
                    execute_time = processes[i].remaining_time;

                // Execute the process for the quantum or remaining time, whichever is smaller
                time += execute_time;
                processes[i].remaining_time -= execute_time;

                printf("Process %d executed for %d seconds at time %d\n", processes[i].id, execute_time, time);

                if (processes[i].remaining_time == 0) {
                    completed++;
                }
            }
        }
    }
}

int main() {
    int n, quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        printf("Enter arrival time for Process %d: ", i + 1);
        scanf("%d", &processes[i].arrival_time);
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
    }

    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    printf("Round Robin Scheduling:\n");
    roundRobin(processes, n, quantum);

    return 0;
}
