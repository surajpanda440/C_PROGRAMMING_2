#include<stdio.h>
#include<stdlib.h>
#define size 10
int top=-1 ,stack[size];
void push();
void pop();
void traversal();
int main()
{
	int element,choice;
	 
	while(1)
	{
	    printf("\nfor push enter 1");
        printf("\nfor pop enter 2");
        printf("\nfor traversal enter 3");
        printf("\nenter 4 to exit");
        printf("\n\nenter your choice");
        scanf("%d",&choice);
        
        switch(choice)
        {
        	case 1:
                printf("enter the element to be entered");
                scanf("%d",&element);
                push();
                break; 
            case 2:
            	pop();
            	break;
            case 3:
            	traversal();
            	break;
            case 4:
            	exit(0);
            default:
            	printf("\nInvalid choice");
	    }
	}
}

void push()
{
	int element;
    if(top==size-1)
	{
		printf("\nOverflow");
	}
	else
	{
		top=top+1;
		stack[top]= element;
	}	
}

void pop()
{
	if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element:  %d",stack[top]);
        top=top-1;
    }
	
}

void traversal()
{
	int i=0;
	if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}
