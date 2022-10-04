#include<stdio.h>
int main()
{
    int arr[10],key;
    int i,n,low,high,mid,flag=0,position;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the elements in ascending order \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key Element\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            flag=1;
            position=mid+1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("Found at position %d",position);
    }
    else
    {
        printf("not found");
    }
    return 0;
}