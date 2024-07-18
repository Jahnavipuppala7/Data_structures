#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int k;
    scanf("%d",&k);
    for(int i=k+1;i<5;i++)
    printf("%d",arr1[i]);
    for(int i=0;i<k+1;i++)
    printf("%d",arr1[i]);
}
