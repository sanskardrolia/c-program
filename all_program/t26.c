//This is all about pointer
//Tutorial no.26
//let's begin
#include<stdio.h>
int main()
{
    int number;
    printf("Enter A Number\n");
    scanf("%d",&number);
    int *pointer = &number;
    printf("%x\n",pointer);//address of number stored in pointer
    printf("%x\n",&pointer);//address of pointer
    printf("%d\n",*pointer);//value of number stored in pointer
    printf("%d\n",number);//vcalue of number
    printf("%x\n",&number);//address of number direct without storing to pointer
    return 0;
}