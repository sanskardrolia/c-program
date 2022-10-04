#include<string.h>
#include<stdio.h>
int main()
{
    char name[10],name1[10];
    printf("Enter two string\n");
    gets(name);
    printf("another string\n");
    gets(name1);
    int k=0;
    int l1=strlen(name);
    int l2=strlen(name1);
    for(int i=0;i<l1-l2;i++)
    {
        for(int j=0;j<l2;j++)
        {
           if(name1[j]==name[i])
           {
               k++;
           }
        }
    }
    printf("%d",k);

}