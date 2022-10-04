#include<stdio.h>

int factorial(int number)
{
    if(number==0||number==1)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number-1));
    }
}


int main()
{
    int a;
    printf("enter the number for factorial check:");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;

}