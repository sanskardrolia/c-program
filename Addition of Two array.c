#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter the size of 1st array\n");
    int n,m;
    scanf("%d",&m);
    printf("enter the size of 2nd array\n");
    scanf("%d",&n);
    int  arr1[m],arr2[n],sum[m+n];
    if(m>n)
    {
        printf("Enter array of 1st %d element\nBy Giving space between each number\nLike this\n10<space>23\n",m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr1[i]);
        }
        printf("Enter array of 2nd %d element\nBy Giving space between each number\nLike this\n10<space>23\n",n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr2[i]);
        }
        for(int i=0;i<m;i++)
        {
            sum[i]=arr1[i]+arr2[i];
        }
        for(int i=0;i<m;i++)
        {
            printf("%d\t",sum[i]);
        }
    }
    else
    {
        printf("Enter array of 1st %d element\nBy Giving space between each number\nLike this\n10<space>23\n\n",m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr1[i]);
        }
        printf("Enter array of 2nd %d element\nBy Giving space between each number\nLike this\n10<space>23\n\n",n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr2[i]);
        }
        for(int i=0;i<n;i++)
        {
            sum[i]=arr1[i]+arr2[i];
        }
        for(int i=0;i<n;i++)
        {
            printf("%d\t",sum[i]);
        }
    }
}