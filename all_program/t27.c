#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("value of !st position %d\n",&arr[1]);
    printf("value of !st position %d\n",&arr[2]);
    printf("value of !st position %d\n",*(arr+3));
}