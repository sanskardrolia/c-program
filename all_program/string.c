#include<stdio.h>
int main()
{
    
    int c=0,flag=0;
    char name[1000];
    printf("enter the name\n");
    gets(name);
    puts(name);
    while (name[c]!='\0')
    {
        c++;
    }
    printf("%d\n",c);
    printf("enter the another string\n");
    char name2[100];
    gets(name2);
    puts(name2);
    for(int i=0;i<=c;i++)
    {
        if(name[i]!=name2[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("matched\n");
    }    
    else
    {
        printf("not matched\n");
    }
    
    return 0;
    
}