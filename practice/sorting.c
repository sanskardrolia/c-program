#include<stdio.h>
int main()
{
  int a[30],i,j,n,temp=0;
  printf("Enter the size \n");
  scanf("%d",&n);
  printf("Enter the %d Elements\n",n);
  for(i=0;i<n;i++)
  {
    printf("Element Number %d :",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++) //bubble sort operation
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("Element @ %d position:",i+1);
    printf("%4d",a[i]);
    printf("\n");
  }
  return 0;
}
