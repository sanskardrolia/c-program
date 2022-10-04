//C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main()
{
    printf("Enter Floating Point number\n");
    float num1,num2;
    float sum;
    scanf("%f %f",&num1,&num2);
    sum=(num1*num2);
    printf("%.2f",sum);// .2 is used here to round off the value 
    return 0;
}