#include<stdio.h>
#include<string.h>
int main() {
  printf("Enter your name\n");
  char name[20];
  gets(name);
  printf("You are welcome %s\n",name);
  printf("enter your age\n");
  int age;
  scanf("%d",&age);
  if(age>=18)
  {
    printf("You are eligible\n");
    printf("Enter Your Phone number\n");
    char number[11];
    a: scanf("%s",number);
    if(strlen(number)==10)
    {
      printf("Number Accepted your number = %s\n",number);
    }
    else{
      printf("Error enter 10 digit number\n\a");
      goto a;
    }
  }
  else
  {
    printf("Error\n\a");
  }
  return 0;
}
