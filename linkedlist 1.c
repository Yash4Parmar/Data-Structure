// yash parmar singly LL
#include <stdio.h>
#include <conio.h>


struct node *ins_f(int x);
struct node *ins_e(int x);
struct node * insert_inorder(int x);
void display(struct node *);
void delete(int info);
//int count();


struct node
{
    int info;
    struct node *link;

}*first = NULL,*new = NULL,*temp = NULL ,*temp2 = NULL;

void main ()
{
    int ch,x;
    while(1)
    {

        printf("\n 1.insert_F \n 2.insert_E \n 3.display \n 4.Insert_last");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("/n Enter element to insert at first");
            scanf("%d",x);
            first = ins_f(x);
            break;
        case 2:
            printf("/n Enter element to insert last");
            scanf("%d",x);
            first = ins_e(x);
            break;
        case 3:
            printf(" \n elements are :");
            display(first);
            break;
        case 4:
            printf("/n Enter element to insert last");
            scanf("%d",x);
            first = insert_inorder(x);
            break;
        default:
            exit(0);
        }
    }
}

struct node * ins_f(int x)
{

    new = (struct node *) malloc(sizeof(struct node *));
    new->info = x;
    new->link = first;
    return new;

}

struct node * ins_e(int x)
{
    new = (struct node *) malloc(sizeof(struct node *));
    new->info=x;
    new->link = NULL;
    if( first = NULL)
        return new;
    else
    {
        temp = first;
        while( temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
        return first;
    }
}
struct node * insert_inorder(int x)
{
    new=(struct node *) malloc(sizeof(struct node));
    new->info=x;
    new->link= NULL;
    if(first==NULL)
    {
        new->link=NULL;
        return new;
    }
    else
    {
        if(new->info <= first->info)
        {
            new->link = first;
            return new;
        }
        else
        {
            temp=first;
            while(new->info > temp->info && temp->link != NULL)
            {
                temp2=temp;
                temp=temp->link;
            }
            if(new->info > temp->info)
            {
                temp2 = temp;
            }
            new->link = temp2->link;
            temp2->link = new;
            return first;
        }
    }
}


void display(struct node *temp)
{
    temp = first;
    if(first == NULL)
    {
        printf("\n underflow");
    }
    while (temp != NULL)
    {
        printf("%d -> %d \t",temp->info,temp->link);
        temp = temp->link;

    }


}
