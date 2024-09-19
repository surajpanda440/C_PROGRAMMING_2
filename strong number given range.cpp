#include<stdio.h>
int main()
{
	int low,high,d,i;
	printf("enter the starting number = ");
	scanf("%d",&low);
	printf("enter the last number = ");
	scanf("%d",&high);
	for(int n=low;n<=high;n++)
	{
		int sum=0;
		i=n;
		while(i!=0)
		{
			int fact=1;
			d=i%10;
			for(int j=1;j<=d;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			i=i/10;
		}
		if(sum==n)
		{
			printf("%d is a strong number :\n",n);
		}
		else
		{
			printf("%d is not a strong number ;\n",n);
		}
	}
}
