#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter a number = ");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		int fact=1,d=n%10;
		for(int i=1;i<=d;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("%d is a strong number :",temp);
	}
	else
	{
		printf("\nnot a strong number");
	}
}
