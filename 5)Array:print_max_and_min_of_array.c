#include<stdio.h>
int main()
{
   int n,max,min;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   min=arr[0];
   max=arr[0];
   for(int i=1;i<n;i++)
   {
           if(arr[i]>max)
            max=arr[i];
           if(arr[i]<min)
           min=arr[i];
   }
   printf("max:%d\n",max);
   printf("min:%d",min);
}
