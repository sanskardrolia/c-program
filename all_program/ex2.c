#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,count=0;
    float input;
    float res;
    this : printf("Enter the choice:\n1. KM - Miles\n2. Inches - Foot\n3. CM - Inches\n4. Pound - KG\n5. Inches - Meter\n6. C - F\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=(input*(1/1.61));
        printf("%0.2f",res);
        break;

        case 2 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=(input*(0.08333));
        printf("%0.2f",res);
        break;

        case 3 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=(input*(1/2.54));
        printf("%0.2f",res);
        break;

        case 4 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=(input*0.45);
        printf("%0.2f",res);
        break;

        case 5 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=(input*0.0254);
        printf("%0.2f",res);
        break;

        case 6 :
        printf("enter value to be converted\n");
        scanf("%f",&input);
        res=((1.8*input)+32);
        printf("%f",res);
        break;

        default :
        count++;
        if(count==2)
        {
            printf("bye\n");
            exit(0);
        }
        else
        {
            printf("enter correct option\n");
            printf("%d attempt over\n",count);
            goto this;
        }
    }
    printf("\ndo you want to continue\n1. yes\n2. no\n");
    int f;
    scanf("%d",&f);
    if(f==1)
    {
        goto this;
    }
    else
    {
        exit(0);
    }
 return 0;
}