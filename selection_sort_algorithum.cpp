//selection_sort_algorithum......

#include <stdio.h>   
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)   
    {  
        small = i;  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  

    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++) 
	{
	    printf("[%d] Element --> %d",i, a[i]); 
		printf("\n");	
	}  
}  
  
int main()  
{
	int n;
   printf("enter the size of the array =  ");
   scanf("%d",&n);
   int a[n];
   printf("\nEnter %d elements into the array : ", n);
   printf("\n__________________________________");
   for(int i=0;i<n;i++)
   {
   	 printf("\nEnter [ %d ] element :- ",i);
   	 scanf("%d",&a[i]);
   }   
    printf("\nBefore sorting array elements are :- \n");  
    printArr(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are :- \n");    
    printArr(a, n);  
    return 0; 
}
