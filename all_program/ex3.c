#include<stdio.h>
int fib(int n)
{
    if(n==0||n==1)
    {
        return n; 
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    printf("Enter Your Number For Series\n");
    int n,m=0;
    scanf("%d",&n);
    printf("Entered Number is %d\n",n);
    for(int i=0;i<n;i++)
    {
    printf(" %d ",fib(m));
    m++;
    }
    return 0;
}