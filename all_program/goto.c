/*test program
for goto*/
#include<stdio.h>
int main()
{
    a: printf("hello\n");
    
    goto a;
    return 0;
}