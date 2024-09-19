#include <stdio.h>
int m,n;
int main()
{
	int arr1[3][3];
	int r,c,zero=0,counter2=0,nonzero=0;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the value of array 1: ");
			scanf("%d",&arr1[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			if(arr1[r][c]!=0)
			{
				
				nonzero++;
			}
			else
				{
					zero++;
				}
		}
	}
	printf("non zero :%d zero: %d",nonzero,zero);
	if(nonzero > zero)
	{
		printf("it is not a sparse matrix");
	}
	else
		printf("it is a sparse program\n");
		
int sp[3][nonzero];
int m=0;n=0;
{
	int r=0,c=0;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			if(arr1[r][c]!=0)
			{
				sp[m++][n]=r;
				sp[m++][n]=c;
				sp[m][n]=arr1[r][c];
				n++;
				m=0;
			}
		}
	}
}
for(r=0;r<3;r++)
	{
		for(c=0;c<nonzero;c++)
		{
			printf("%d ",sp[r][c]);
		}
		printf("\n");
}
}
