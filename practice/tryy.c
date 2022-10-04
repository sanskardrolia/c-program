#include<stdio.h>
int main()
{
    printf("three numbers\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater",a);
        }
    }
    else
    {
        if(b>c)
        {
        printf("%d is greater",b);
        }
        else
        {
        printf("%d is greater",c);
        }
    }
return 0;
}
