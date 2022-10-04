//C Program to Compute Quotient and Remainder
#include<stdio.h>
int main()
{
    int q,r;
    int num1,num2;
    printf("Enter Dividend & Divisor\n");
    scanf("%d %d",&num1,&num2);
    q=num1/num2;
    r=(num1%num2);
    printf("Quotient of %d / %d is %d\n",num1,num2,q);
    printf("Remainder of %d %% %d is %d",num1,num2,r);
    return 0;
}