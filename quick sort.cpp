#include<stdio.h>
void quicksort(int a[40], int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i])
			{
				while(a[i]<=a[pivot]&&i<last)
				i++;
				while(a[j]>a[pivot])
				j--;
				if(i<j)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			temp=a[pivot];
			a[pivot]=a[j];
			a[j]=temp;
			quicksort(a,0,j-1);
			quicksort(a,j+1,last);
		}
	}
}
int main()
{
	int a[40],n,i;
	printf("enter the size of the array =");
	scanf("%d",&n);
	printf(" enter the elements =");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("sorted elements are :");
	for (i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
