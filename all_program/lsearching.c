#include<stdio.h>
void main(){
    int n,a[10],flag=0,i;
    printf("Liner Searching\n");
    printf("Enter the Size\n");
    scanf("%d",&n);
    printf("enter the Element\n");
    for(i=0;i<n;i++)
    {
        printf("index [%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the Key Element\n");
    int key;
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        } 
    }
    if(flag==1)
    {
        printf("Found at %d",i+1);
    }
    else
    {
        printf("not found\n");
    }
    
}