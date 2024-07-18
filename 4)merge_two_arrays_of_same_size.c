#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("-------------------");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\t%d\t%d",arr1[i],arr2[i]);
    }
}
