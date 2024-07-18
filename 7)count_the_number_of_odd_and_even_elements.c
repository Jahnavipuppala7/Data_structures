#include <stdio.h>
int main() {
   int n,count_e=0,count_o=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       count_e+=1;
       else
       count_o+=1;
   }
   printf("%dis count of even numbers and %d is count of odd numbers for the given array",count_e,count_o);
}
