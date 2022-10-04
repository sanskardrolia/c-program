#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(1)
    {
        printf("\nEnter Your Choice\n");
        printf("\n1.Int\n2.Float\n3.Double\n4.Char\n5.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("%zu",sizeof(int));
            break;
            case 2: printf("%zu",sizeof(float));
            break;
            case 3: printf("%zu",sizeof(double));
            break;
            case 4: printf("%zu",sizeof(char));
            break;
            case 5: exit(0);
            default : printf("Enter Again\n");
        }
    }
    return 0;
}