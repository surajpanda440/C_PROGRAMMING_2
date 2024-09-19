#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter a number = ");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("%d is a pelindraom number ",temp);
	}
	else{
		printf("%d is not pelindrom number ",temp);
	}
}
