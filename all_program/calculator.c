#include <stdio.h>
int main()
{
  int a,b;
  float res;
  printf("enter the 1st number\n");
  scanf("%d",&a);
  printf("enter the 2nd number\n");
  scanf("%d",&b);
  int s;
  printf("enter the choice \n 1. Add \n 2. sub \n 3. mul \n 4. div \n 5. modulus\n");
  scanf("%d",&s);
  switch (s) {
    case 1 : res = a+b;
    break;
    case 2 : res = a-b;
    break;
    case 3 : res = a*b;
    break;
    case 4 : res = a/b;
    break;
    case 5 :
    if(a<b)
    {
      printf("Error\a");
      exit(0);
    }
    else
    {
    res = a%b;
  }
  }
  printf("result = %f\n",res);
}
