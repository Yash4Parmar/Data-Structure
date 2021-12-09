// Yash Parmar
// insert a value in specific position in array
#include<stdio.h>
int main()
{
   int arr[100],pos,i,size,value;
   printf("enter no of elements in array:");
   scanf("%d",&size);

   printf("enter %d elements are:\n",size);

   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("enter the position of the element:");
   scanf("%d",&pos);

   printf("enter the value :");
   scanf("%d",&value);

   for(i=size-1;i>=pos-1;i--)
   {
      arr[i+1]=arr[i];
   }
      arr[pos-1]= value;

   printf("array after inserting the value :\n");

   for(i=0;i<=size;i++)
   {
      printf("%d\n",arr[i]);
   }
   return 0;
}
