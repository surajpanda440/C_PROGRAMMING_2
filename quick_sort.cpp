//quick sort algorithum.....

#include<stdio.h>
void quicksort(int number[],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;
      while(i<j)
	  {
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j)
		 {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main()
{
   int i, count;
   printf("enter the size of the array =  ");
   scanf("%d",&count);
   int number[count];
   printf("\nEnter %d elements in to the array : ", count);
   printf("\n___________________________________");
   for(i=0;i<count;i++)
   {
   	 printf("\nenter %d element :- ",i);
   	 scanf("%d",&number[i]);
   }
   printf("\n___Printing the unsorted array___:\n");
   for(i=0;i<count;i++)
   {
   	printf(" [%d] Element :-> %d",i,number[i]);
   	printf("\n");
   }
   quicksort(number,0,count-1);
   printf("\n___Printing the sorted array___:\n");
   for(i=0;i<count;i++)
   {
   	printf(" [%d] Element :-> %d",i,number[i]);
   	printf("\n");
   }
   return 0;
}
