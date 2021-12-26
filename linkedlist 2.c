// Yash Parmar
// dubbly linkedlist
#include <stdio.h>
#include <conio.h>

struct node *insert_first(int x);
struct node *insert_end(int x);
struct node *insert_in_order(int x);
void forward_display(struct node *temp);
void backward_display(struct node *temp);
void delete (int x);

struct node
{
    int info;
    struct node *link;
    struct node *pre;

} *r = NULL, *l = NULL, *new = NULL, *temp = NULL, *temp2 = NULL;

void main()
{
    int ch, x;
    while (1)
    {

        printf("\n1=>insert_First \n2=>insert_End \n3=>insert_inorder \n4=>forward display \n5=>backward display \n6=>delete \n7=>exit \n=>");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            r = insert_first(x);
            break;
        case 2:
            r = insert_end(x);
            break;
        case 3:
            r = insert_in_order(x);
            break;
        case 4:
            forward_display(r);
            break;
        case 5:
            backward_display(l);
        case 6:
            delete (x);
            break;
        case 7:
            exit(0);
        }
    }
}

struct node *insert_first(int x)
{
    printf("enter element for insert at first: ");
    scanf("%d", &x);

    new = (struct node *)malloc(sizeof(struct node));
    new->info = x;

    if (r == NULL && l == NULL)
    {
        new->link = NULL;
        new->pre = NULL;
        r = new;
        l = new;

        r->link = NULL;
        r->pre = NULL;
        l->link = NULL;
        l->pre = NULL;

        return new;
    }
    else
    {
        r->pre = new;
        new->link = r;
        new->pre = NULL;
        r = new;
        r->pre = NULL;
        return new;
    }
}
struct node *insert_end(int x)
{
    printf("enter element to insert at end: ");
    scanf("%d", &x);
    new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    if (r == NULL && l == NULL)
    {
        new->link = NULL;
        new->pre = NULL;
        r = new;
        l = new;
        r->link = NULL;
        r->pre = NULL;
        l->link = NULL;
        l->pre = NULL;
        return new;
    }
    else
    {
        l->link = new;
        new->pre = l;
        new->link = NULL;
        l = new;
        l->link = NULL;
        return r;
    }
}
struct node *insert_in_order(int x)
{
    printf("enter elemet to insert in order: ");
    scanf("%d", &x);
    new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    if (r == NULL && l == NULL)
    {
        new->link = NULL;
        new->pre = NULL;
        r = new;
        l = new;
        r->link = NULL;
        r->pre = NULL;
        l->link = NULL;
        l->pre = NULL;
        return new;
    }
    else
    {
        if (new->info <= r->info)
        {
            r->pre = new;
            new->link = r;
            new->pre = NULL;
            r = new;
            r->pre = NULL;
            return new;
        }
        else
        {
            temp = r;
            while (new->info > temp->info && temp->link != NULL)
            {
                temp2 = temp;
                temp = temp->link;
            }
            if (new->info > temp->info)
            {
                temp->link = new;
                new->pre = temp;
                l = new;
                l->link = NULL;
                return r;
            }
            new->link = temp;
            temp2->link = new;
            new->pre = temp2;
            temp->pre = new;
            return r;
        }
    }
}
void forward_display(struct node *temp)
{
    temp = r;
    if (r == NULL && l == NULL)
    {
        printf("DOUBLY LINKED LIST IS EMPTY.");
    }
    while (temp != NULL)
    {
        printf(" |%d -> %d -> %d|", temp->pre, temp->info, temp->link);
        temp = temp->link;
    }
}
void backward_display(struct node *temp)
{
    temp = l;
    if (r == NULL && l == NULL)
    {
        printf("DOUBLY LINKED LIST IS EMPTY.");
    }
    while (temp != NULL)
    {
        printf(" |%d -> %d -> %d|", temp->pre, temp->info, temp->link);
        temp = temp->pre;
    }
}
void delete (int x)
{
    printf("enter element to delete:");
    scanf("%d", &x);
    if (r == NULL && l == NULL)
    {
        printf("list is empty!!");
        return;
    }
    temp = r;
    while (temp != NULL)
    {
        if (temp->info == x)
        {
            if (temp == r)
            {
                r = r->link;
                r->pre = NULL;
            }
            else if (temp == l)
            {
                l = l->pre;
                l->link = NULL;
            }
            else
            {
                temp->pre->link = temp->link;
                temp->link->pre = temp->pre;
            }
            free(temp);
            printf("node deleted");
            return;
        }
        temp = temp->link;
    }
    printf("\ndata not found!!");
}
