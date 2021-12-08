//YASH PARMAR
//swap max min value of array
#include <stdio.h>
int main()
{
    int a[5],min,max,temp,maxposition,minposition,i;
    printf("enter 5 element :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    max = a[0];
    min = a[0];
    maxposition= 0;
    minposition = 0;

    for(i=1;i<5;i++)
    {
        if (max<a[i])
        {
            max=a[i];
            maxposition=i;
        }
        if(min>a[i])
        {
            min=a[i];
            minposition=i;
        }
    }
    temp=a[maxposition];
    a[maxposition]=a[minposition];
    a[minposition]=temp;

    printf("after swap array :");
     for(i=0;i<5;i++)
     {
         printf("\n%d",a[i]);
     }
     return 0;
}
