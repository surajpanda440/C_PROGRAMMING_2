#include <stdio.h>

// Structure to represent a process
struct Process 
{
    int id;        // Process ID
    int arrival;   // Arrival time
    int burst;     // Burst time
    int completion; // Completion time
    int turnaround; // Turnaround time
    int waiting;   // Waiting time
};

// Function to calculate completion, turnaround, and waiting times for each process
void calculateTimes(struct Process processes[], int n) 
{
    int currentTime = 0;
    
    for (int i = 0; i < n; i++) {
        // Set the completion time
        processes[i].completion = currentTime + processes[i].burst;
        
        // Calculate turnaround time
        processes[i].turnaround = processes[i].completion - processes[i].arrival;
        
        // Calculate waiting time
        processes[i].waiting = processes[i].turnaround - processes[i].burst;
        
        // Update the current time
        currentTime = processes[i].completion;
    }
}

// Function to display the process details
void displayProcesses(struct Process processes[], int n) {
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].id, processes[i].arrival, processes[i].burst,
               processes[i].completion, processes[i].turnaround, processes[i].waiting);
    }
}

int main() {
    int n;
    printf("Enter the number of processes :- ");
    scanf("%d", &n);
    printf("\n");
    struct Process processes[n];
    
    printf("Enter arrival time, burst time, and priority for each process:\n");
    printf("--------------------------------------------------------------\n");

    // Input process details
    for (int i = 0; i < n; i++) 
	{
        processes[i].id = i + 1;
        printf("___Process %d:___\n", i + 1);
        printf("Enter Arrival Time for Process %d :-  ", i + 1);
        scanf("%d", &processes[i].arrival);
        printf("Enter Burst Time for Process %d :- ", i + 1);
        scanf("%d", &processes[i].burst);
        printf("\n");
    }

    // Calculate completion, turnaround, and waiting times
    calculateTimes(processes, n);

    // Display the process details
    displayProcesses(processes, n);

}
