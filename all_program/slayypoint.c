#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\nYou Got a Message\n\nType yes to Open\n\nType no to Close\n\n");
    char a[10];
    gets(a);
    if(strcmp(a,"YES")==0)
    {
        printf("\n\nToh chaliyeh BINOD krte hai\a\n");
    }
    else if(strcmp(a,"yes")==0)
    {
        printf("\n\nToh chaliyeh BINOD krte hai\a\n");
    }
    else
    {
        printf("\n\nBINOD\a");
    }
    return 0;

}