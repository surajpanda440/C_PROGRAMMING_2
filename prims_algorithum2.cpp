#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 5 // Number of vertices

int minKey(int key[], bool mstSet[]) 
{
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
  
    return min_index;
}
  
void printMST(int parent[], int graph[V][V]) 
{
	int total_cost=0;
    printf(" Edge     Weight\n");
    for (int i = 1; i < V; i++)
    {
       printf("%d - %d  <-->  %d \n", parent[i], i, graph[i][parent[i]]);
       total_cost=total_cost+graph[i][parent[i]];
    }
    printf("\nminimun cost of the spanning tree = %d",total_cost);
}
  
void primMST(int graph[V][V]) 
{
    int parent[V];
    int key[V];
    bool mstSet[V];
  
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
  
    key[0] = 0;
    parent[0] = -1;
  
    for (int count = 0; count < V - 1; count++) 
	{
        int u = minKey(key, mstSet);
        mstSet[u] = true;
  
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
  
    printMST(parent, graph);
}
void printmatrix(int graph[V][V])
{
	for(int i=0;i<V;i++)
	{
	   for(int j=0;j<V;j++)
		{
			printf("\t%d ",graph[i][j]);
		}
	printf("\n");
   }
}

  
int main() 
{
	int i,j;
	int graph[V][V];
	printf("enter data to the matrix ....\n");
	for(i=0;i<V;i++)
	{
	    printf("\nenter data in %dth row ....\n",i);
		for(j=0;j<V;j++)
		{
		    printf("enter to [%d] <--> [%d] waight =  ",i,j);
			scanf("%d",&graph[i][j]);
		}
	}
    //int graph[V][V] = { { 0, 2, 0, 6, 0 },
      //                  { 2, 0, 3, 8, 5 },
        //                { 0, 3, 0, 0, 7 },
          //              { 6, 8, 0, 0, 9 },
            //            { 0, 5, 7, 9, 0 } };
            
    printf("\n\tprinting the matrix.....\n");
	printmatrix(graph);
	printf("\n");
    primMST(graph);
  
    return 0;
}
