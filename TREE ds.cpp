#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* lt;
    struct node* rt;
};

struct node* root;
struct node* subroot;

struct node* createT()
{
    int d;
    printf("Enter the data(If no data has to be entered, enter -1): ");
    scanf("%d",&d);
    if(d==-1)
    {
        return NULL;
    }
    struct node* Newnode=(struct node*)malloc(sizeof(struct node));
    Newnode->data=d;
    printf("Enter The Left Child: %d-",Newnode->data);
    Newnode->lt=createT();
    printf("Enter The Right Child:%d-",Newnode->data);
    Newnode->rt=createT();
    return Newnode;
}

void preorder(struct node* temp)
{
    if (temp!=NULL)
    {
        printf("%d\n",temp->data);
        preorder(temp->lt);
        preorder(temp->rt);
    }
    return;
}

void postorder(struct  node* temp){
    if(temp!=NULL){
        postorder(temp->lt);
        postorder(temp->rt);
        printf("%d\n", temp->data);
    }
}

void inorder(struct node* temp)
{
    if (temp!=NULL)
    {
        inorder(temp->lt);
        printf("%d\n",temp->data);
        inorder(temp->rt);
    }
    return;
}

void main()
{
    struct node*root=createT();
    printf("Preorder Traversal:\n");
    preorder(root);
    printf("Postorder Traversal:\n");
    postorder(root);
    printf("Inorder Traversal:\n");
    inorder(root);

    
}
