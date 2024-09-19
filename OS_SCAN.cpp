#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i;
    printf("Enter the number of requests: ");
    scanf("%d", &n);
    int requests[n];

    printf("Enter the requests:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }

    int head, seek_time = 0;
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);

    for (i = 0; i < n; i++) {
        seek_time += abs(head - requests[i]);
        head = requests[i];
    }

    printf("Total seek time: %d\n", seek_time);
    return 0;
}
