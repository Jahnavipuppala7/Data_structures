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
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]<arr[j])
           {
               max=arr[j];
               min=arr[i];
           }
           else
           max=arr[i];
           min=arr[j];
       }
   }
   printf("max:%d\n",max);
   printf("min:%d",min);
}
