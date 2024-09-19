#include<stdio.h>
void push(int);
void pop();
void search();
void traversal();
void search(int);
int front=-1,rear=-1;
int i,n,sch;
int a[50];
int main()
{
    printf("Enter size of the queue=\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter 1 for push\n 2 for pop\n 3 for traversal\n 4 for searching!!\n");
    int ch;
    scanf("%d",&ch);
    for(ch=1;ch<=4;ch++)
    {
    switch (ch)
    {
    case 1:
    int num;
    printf("Enter no. of elemnets in a queue!!\n");
    int limit;
    scanf("%d",&limit);
    printf("Enter elements in the queue!!\n");
    for(i=1;i<=limit;i++)
    {
        scanf("%d",&num);
        push(num);
    }   
        break;
    case 2:
    printf("Enter no. of elemnets to be deleted!!\n");
    int del;
    scanf("%d",&del);
    for(i=1;i<=del;i++)
    {    
        pop();
    }
    break;
    case 3:
    traversal();
    break;
    case 4:
    printf("Enter number to be searched!!\n");
    scanf("%d",&sch);
	search(sch); 
	break;   
    default:
    printf("Wrong input!!");
        break;
    }
    }
}
void push(int num)
{
    if(rear==(n-1))
    printf("Queue is full\n");
    else if (front==-1 && rear==-1 )
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    a[rear]=num;
}
void pop()
{
    int val;
    if(front==-1 || front==rear)
    {
        printf("The queue is empty!!\n");
    }
    else
    {
        val=a[front];
        front++;
        printf("The deleted element is = %d\n",val);
    }
}
void traversal()
{
    printf("The final queue is =\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}
void search(int sch)
{
	int c=0;
	for(i=front;i<=rear;i++)
	{
		if(a[i]==sch)
		c++;
	}
	if(c>0)
	{
		printf("The number is present!!");
	}
}
