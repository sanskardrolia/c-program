// this is for call by reference and call by value
#include<stdio.h>
void swap(int *address1 , int *address2)
{
    int temp;
    temp = *address1;
    *address1 = *address2;
    *address2 = temp;
}
int main()
{
    int a=33,b=99;
    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("changed value\n");
    printf("a = %d and b = %d",a,b);
    return 0;
}