#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 4
int ch, top=-1,status=0;
void push(int stack[], int item)
{
    if(top==MAX-1)
    printf("\n\nStack is Overflow");
    else
    {
        stack[++top]=item;
        status++;
        printf("\nStatus: The number of element in stack =%d",status);
    }
}
int pop(int stack[])
{
    int ret;
    if(top==-1)
    {
        printf("\n\nStack Underflow");
    }
    else
    {
        ret=stack[top--];
        status--;
        printf("Popped element is %d",ret);
        printf("\nStatus: The number of elements in stack =%d",status);
    }
    return ret;
}
/*void palindrome(int stack[])
{
    int rem, k,j,d,digit,len=top+1,ind=0;
    int num[10],rev[10],i=0,temp=top;
    int length=0;
    if(top==-1)
    {
        printf("The stack is empty.So cannot check for Palindrome");
        return;
    }
    while(temp!=-1)
    {
        digit=stack[temp];
        num[i]=digit;
        temp--;
        i++;
    }
    for(j=0;j<len;j++)
    printf("%d\n",num[j]);
    for(k=len-1;k>=0;k--)
    {
        rev[k]=num[ind];
        ind++;
    }
    printf("Reverse number\n");
    for(k=0;k<len;k++)
    {
        printf("%d\n",rev[k]);
    }
    for(i=0;i<len;i++)
    {
        if(num[i]==rev[i])
        {
            length++;
        }
    }
    if(length==len)
    printf("The stack content is Palindrome\n");
    else
    printf("The stack content is Not palindrome\n");
}*/
void display(int stack[])
{
    int i;
    if(top==-1)
    printf("\nStack is Empty");
    else
    {
        printf("\nStack content are");
        for(i=top;i>=0;i--)
        printf("\n......\n| %d |",stack[i]);
        printf("\n");
    }
}
void main()
{
    int stack[MAX],item;
    do
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. PUSH(insert) in the stack");
        printf("\n2. POP(delete) from the stack");
        printf("\n3. PALINDROME check using STACK");
        printf("\n4. Exit (End the Execution)");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter a element to be pushed: ");
            scanf("%d",&item);
            push(stack,item);
            display(stack);
            break;
            case 2 : item=pop(stack);
            display(stack);
            break;
           // case 3: palindrome(stack);
            //break;
            case 4: exit(0);
            break;
            default: printf("\nEnd Of Execution");
        }
    }while(ch!=4);
}