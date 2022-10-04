#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    int m=0;
    int f=0,s=1,res;
    if(n==0)
    {
        printf("%d",n);
    }
    else if(n==1)
    {
        printf("%d\t%d",f,s);
    }
    else
    {
        printf("%d\t%d\t",f,s);
        for(int i=2;i<n;i++)
        {
            res=f+s;
            f=s;
            s=res;
            printf("%d\t",res);
        }
    }
    return 0;
}