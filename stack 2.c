//Yash Parmar
// stack push,pop,display functions
#include <stdio.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
    int n;
    while(1)
    {
        printf("\n1=>Push\n2=>Pop\n3=>Display\n4=>Exit");
        printf("\nEnter your choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\n ENTER VALID NUMBER PLEASE!");
        }
    }
}
void push()
{
    int var;
    if (top==MAX-1)
    {
        printf("OVERFLOW!\n");
    }
    else
    {
        printf("\n enter element to push :");
        scanf("%d",&var);
        top = top+1;
        stack[top]=var;
    }
}
void pop()
{
    if (top==-1)
    {
        printf("UNDERFLOW!\n");
    }
    else
    {
        printf("Poped element %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("UNDERFLOW!\n");
    }
    else
    {
        printf("STACK :");
        for(i=top;i>=0;--i)
        {
            printf("%d\n",stack[i]);
        }
    }
}
