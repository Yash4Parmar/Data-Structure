//Yash Parmar
// stack push,pop,display functions using structure
#include <stdio.h>
//#define MAX 5
//int top=-1;
void push();
void pop();
void display();

struct stack
{
    int a[5];
    int top;
}s;


void main()
{
    int n;
    s.top = -1;
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
    if (s.top>=5)
    {
        printf("OVERFLOW!\n");
    }
    else
    {
        printf("\n enter element to push :");
        scanf("%d",&var);
        s.top=s.top+1;
        s.a[s.top]=var;
    }
}
void pop()
{
    if (s.top==-1)
    {
        printf("UNDERFLOW!\n");
    }
    else
    {
        s.top = s.top-1;
        printf("Poped element %d",s.a[s.top+1]);

    }
}
void display()
{
    int i;
    if(s.top==-1)
    {
        printf("UNDERFLOW!\n");
    }
    else
    {

        printf("STACK :\n");
        for(i=s.top;i>=0;i--)
        {
            printf("%d\n",s.a[i]);
        }

    }
}
