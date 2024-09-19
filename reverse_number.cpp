#include<stdio.h>
int main()
{
	int n;
	printf("enter a number = ");
	scanf("%d",&n);
	int temp=n;
	int rev=0;
	while(n!=0)
	{
		rev=(rev*10)+n%10;
		n=n/10;
	}
	printf("\nafter reverse = %d",rev);
	if(rev==temp)
	{
		printf("\ngiven number is a pelindrom number ");
	}
	else{
		printf("\nnot pelindrom");
	}
	return 0;
}
