#include<stdio.h>
int main() {
  c: printf("Enter Your Passing subject\n1. Both Maths and Science\n2. Maths only\n3. Science Only\n");
  int a;
  scanf("%d",&a);
  if(a==1)
  {
    printf("Congrats You Won Amount of Rs.45\n");
  }
  else if(a==2)
  {
    printf("Congrats You Won  amount of Rs.15\n");
  }
  else if(a==3)
  {
    printf("Congrats You Won  amount of Rs.15\n");
  }
  else
  {
    printf("Are You Sure You won't Pass any of Mentioned Subject\npress\n1. For yes\n2. For No\n");
    int b;
    scanf("%d",&b);
    if(b==2)
    {
    printf("):\n");
    }
    else
    {
      goto c;
    }
  }
  return 0;
}
