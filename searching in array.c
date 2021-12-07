//YASH PARMAR
//searching of unorderd array of 10 element
#include <stdio.h>
int main()
{
    int a[100],n,x,i;

    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter the elements :");

    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search :");
    scanf("%d",&x);

    for(i=0; i<n; i++)
    {
        if (a[i]==x)
        {
        printf("element found");
        return 0;
        }
    }
    printf ("element not found");

}
