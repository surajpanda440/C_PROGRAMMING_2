#include<stdio.h>
 
void push()
{
    int x,n;
    int top=-1;
    int stack[n];
    printf("enter the number =");
    scanf("%d",x);
    if(top==(n-1))
    {
    	printf("overflow --> the stack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
int main()
{
	int n;
	int top=-1;
	int stack[n];
	printf("enter the size of the stack =");
	scanf("%d",n);
    push();
}
