#include<stdio.h>
#include<stdlib.h>
int main()
{
    
         printf("Enter Choice \n1. Star print\n2. Reverse Star Print\n3. Exit\n");
         int choice;
         scanf("%d",&choice);
          int n;
         printf("Enter Number for pattern\n");
         scanf("%d",&n);
         while(1)
            {
       
        switch(choice)
        {
            case 2: 
                for(int i=1;i<=n;i++)
            {
            for(int j=i;j<=n;j++)
            {
                printf("* ");
            }
            printf("\n");
            }
            break;
            case 1:
                for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
            case 3:
            exit(0);
            
        }    
        return 0;
    }

}