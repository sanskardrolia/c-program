#include<stdio.h>
int main()
{
    int arr[50];
    int n,i,x,pos;
    printf("Enter the N Value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    printf("enter the number to be inserted\n");
    scanf("%d",&x);
    printf("enter the Position\n");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
        
    }
}