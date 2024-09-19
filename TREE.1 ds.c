
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *createT()
{
    int d;
    struct node *NN;
    printf("Enter the data ");
    scanf("%d",&d);
    if(d==-1)
    {
        return  NULL;
    }
    NN = (struct node *) malloc(sizeof(struct node));
    NN->data=d;
    printf("enter the left child\n");
    NN->left= createT();
    printf("Enter the right child\n");
    NN->right= createT();
    return NN;
}
void preorder(struct node *temp)
{
    if(temp!=NULL)
    {
        printf("%d\n",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
    return;
}
void inorder(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("%d\n",temp->left);
        inorder(temp->data);
        inorder(temp->right);
	}
	return ;
}
void postorder(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("%d\n",temp->left);
        postorder(temp->right);
        postorder(temp->data);
	}
	return ;
}

int main()
{
    struct node *root=createT();
    preorder(root);
    inorder(root);
    postorder(root);
    
    return 0;
}
