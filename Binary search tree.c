//YASH PARMAR
// BINARY SEARCH TREE
#include<stdio.h>
#include<conio.h>
struct node
{
    int value;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *insert(struct node *r, int data);
void inOrder(struct node *r);
void preOrder(struct node *r);
void postOrder(struct node *r);
struct node *Delete(struct node *r, int data);
struct node * FindMin(struct node *root);
void main()
{
    root = NULL;
    int n, v, m;
    char ch;
    printf("\n Enter how many data you want to insert:\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Data %d: ", i+1);
        scanf("%d", &v);
        root = insert(root, v);
    }
    printf("Inorder Traversal: ");
    inOrder(root);
    printf("\nPreorder Traversal: ");
    preOrder(root);
    printf("\nPostorder Traversal: ");
    postOrder(root);
    printf("\nEnter the data you want to delete :");
    scanf("%d",&m);
    root = Delete(root,m);
    printf("\nInorder traversal is :");
    inOrder(root);
    printf("\nPreorder traversal is :");
    preOrder(root);
    printf("\nPostorder traversal is :");
    postOrder(root);
}
struct node* insert(struct node* r, int data)
{
    if(r==NULL)
    {
        r = (struct node*) malloc(sizeof(struct node));
        r->value = data;
        r->left = NULL;
        r->right = NULL;
    }
    else if(data < r->value)
    {
        r->left = insert(r->left, data);
    }
    else
    {
        r->right = insert(r->right, data);
    }
    return r;
}
void preOrder(struct node* r)
{
    if(r!=NULL)
    {
        printf("%d ", r->value);
        preOrder(r->left);
        preOrder(r->right);
    }
}
void postOrder(struct node* r)
{
    if(r!=NULL)
    {
        postOrder(r->left);
        postOrder(r->right);
        printf("%d ", r->value);
    }
}
void inOrder(struct node* r)
{
    if(r!=NULL)
    {
        inOrder(r->left);
        printf("%d ", r->value);
        inOrder(r->right);
    }
}
struct node *Delete(struct node *r, int data)
{
    if (r== NULL)
    {
        return NULL;
    }
    if (data < r->value)
    {
        r->left = Delete(r->left, data);
    }
    else if (data> r->value)
    {
        r->right = Delete(r->right, data);
    }
    else
    {
        if (r->left == NULL && r->right == NULL)
        {
            free(r);
            r= NULL;
        }
        else if (r->left == NULL)
        {
            struct Node *temp = r;
            r= r->right;
            free (temp);
        }
        else if (r->right == NULL)
        {
            struct Node *temp = r;
            r = r->left;
            free (temp);
        }
        else
        {
            struct node *temp = FindMin(r->right);
            r->value= temp->value;
            r->right = Delete(r->right, temp->value);
        }
    }
    return r;
}
struct node * FindMin(struct node *root)
{
    if (root->left != NULL)
    {
        return FindMin(root->left);
    }
    return root;
}
