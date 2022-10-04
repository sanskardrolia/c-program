#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the Number \a\n");
    scanf("%d",&n);
    int arr[100];
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("total sum = %d",sum);
    return 0;
    
}