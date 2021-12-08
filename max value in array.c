//YASH PARMAR
//find largest value from array
#include <stdio.h>
int main()
{
    int a[10],n,i,max;
    printf("enter size of array :");
    scanf("%d",&n);
    printf("enter elements :");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0; i<n; i++)
    {
        if(max < a[i])
        max = a[i];
    }
    printf(" max element = %d",max);
    return 0;
}
