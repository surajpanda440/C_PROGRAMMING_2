#include <stdio.h>
int stack[10];
void push();
void pop();
void travensaral();
int top=-1;
int main()
{
	int choice;
	printf("\n 1) for pushing the element int to the stack ");
	printf("\n 2) for poping the elemnt ");
	printf("\n 3) for travessnaral ");
	printf("\n 4) for exit from the stack \n");
	scanf("\n%d",&choice);
	{ 
	//while(choice>0 && choice<5)
	
	switch(choice)
	{
		case 1:
			int ele;
			printf("enter the element wanted to be push = ");
		    scanf("%d",&ele);
			push( );
			break;
		case 2:
			pop();
			break;
		case 3:
			travensaral();
			break;
		case 4:
			printf("\n EXIT");
			break;
		default:
			printf("defult");
			break;
	}
	printf("Enter your input agiain \t");
	scanf("%d",&choice);
}
	
}
void push(int ele)
{
	if(top==9)
	{
		printf("\n the stack is full no more element will be insert= \n ");
	}
	else
	{
		
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	int del;
	if(top==-1)
	{
		printf("\n the stack is EMPTY");
		//return top;
	}
	else
	{
		del=stack[top];
		top--;
		//return del;
	}
}
void travensaral()
{
	if(top==-1)
	{
		printf("\n the stack is EMPTY");
	}
	else
	{
		printf("\n printing the stack");
		for(int i=top;i>-1;i--)
		printf("\n %d",stack[i]);
	}
}
//void exit()



