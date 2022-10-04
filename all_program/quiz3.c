#include<stdio.h>
#include<stdlib.h>
void add()
{
    int a,b;
    int c=0;
    this : printf("Enter The Number A\n");
    scanf("%d",&a);
    printf("Enter The Number B\n");
    scanf("%d",&b);
    printf("The Sum is %d\n",a+b);
    int n;
    that : printf("\nDo You Want to Continue\n1. For Exit \n2. For Continue \n");
    scanf("%d",&n);
    if(n==1)
    {
        exit(0);
    }
    else if(n==2)
    {
        goto this;
    }
    else 
    {
        c++;
        printf("Attempt Number %d Failed \n",c);   
        if(c==2)
        {
            exit(0);
        }
        else
        {
            goto that;
        }
        

    }
}
int main()
{
    add();
    return 0;
}