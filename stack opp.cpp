#include<stdio.h>
int size=10;
int stack[10];
int top=-1;
int element;



void push()
{
    printf("Enter the element you want to push");
    scanf("%d",&element);
    if(top==10-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top]=element;
    }
   
}
void pop()
{
    
    if(top==0)
    {
        printf("The stack is empty");
    }
    else
    {
        top--;
     
    }
}
void Traversal()
{
   for(int i=0;i<=top;i++){
    printf("%d\n",stack[i]);
   }
}
int main()
{
    int choice;
    printf("Enter the elements of the stack ");
    printf("Enter 1 for Push\n");
    printf("Enter 2 for Pop\n");
    printf("Enter 3 for Traversal\n");
    printf("Enter 4 for Exit\n");
    scanf("%d",&choice);
    
       
           do{        
            switch(choice)
            {
                case 1: push();
                        break;
                case 2: pop();
                        break;
                case 3: Traversal();
                        break;
                case 4:
                        break;
                default: printf("Invalid Input");
                        break;
               
            }
            printf("Enter your input again ");
            scanf("%d",&choice);
            }while(choice>0 && choice<4);
            return 0;
}
