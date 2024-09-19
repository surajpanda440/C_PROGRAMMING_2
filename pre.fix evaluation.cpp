#include<stdio.h>
#define size 15
#include<math.h>
#include<string.h>
int stack[size];
int top=-1;
void push(int ch)
{
	top++;
	stack[top]=ch;
}

int pop()
{
	int ch;
	ch=stack[top];
	top=top-1;
	return(ch);
}

int main()

{

char prefix[10];

int len,a,b,c,i;

printf("Enter the prefix Expression: ");

scanf("%s",prefix);

len=strlen(prefix);

for(i=len-1;i>=0;i--)
	{
		if(prefix[i]=='+')
		{
			a=pop();
			b=pop();
			c=a+b;
			push(c);
		}
		else if(prefix[i]=='-')
		{
			a=pop();
			b=pop();
			c=a-b;
			push(c);
		}
		else if(prefix[i]=='*')
		{	a=pop();
			b=pop();
			c=a*b;
			push(c);
		}
		else if(prefix[i]=='/')
		{
			a=pop();
			b=pop();
			c=a/b;
			push(c);
		}
		else if(prefix[i]=='^')
		{
			a=pop();
			b=pop();
			c=pow(a,b);
			push(c);
		}
		else
		{
			push(prefix[i]-48);
		}
	}
	printf("\nFinal ans = %d",pop());
	return 0;
}
