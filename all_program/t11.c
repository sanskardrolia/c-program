/*video no. 11
 code with harry*/

#include <stdio.h>
#include <string.h>
int main() {
  int choice;
  int a,b;
  float res;
  char mess[100];
  this : printf("Enter Your Choice\n1. To Send Message\n2. To Calculate \n3. Voting Check\n");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
    {
      printf("Enter Message less than 100 letter\n");
      getchar();                //to avoid error in accepting String
      gets(mess);
      printf("Message Sent!\n");
      printf("Do You Want to continue\n1. Yes\n2. No\n Press ctrl c at a time to terminate any time\n");
      int con;
      scanf("%d",&con);
      if(con==1)
      {
        goto this;
      }
      else
      {
        printf("bye\n");
      }
    }

        break;
        case 2 :
        qwe : printf("enter the 1st number\n");
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
        }
        else
        {
          res = a%b;
        }
      }
      printf("result = %f\n",res);
      int qq;
      printf("Do You Want To continue\n1. Yes \n2. No\n");
    scanf("%d",&qq);
    if(qq==1)
    {
      goto this;
    }
    else
    {
      printf("bye\n");
    }

    break;
    case 3 :
    qwer : printf("Enter your name\n");
    char name[20];
    getchar();
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
    int qqw;
    printf("Do You Want To continue\n1. Yes \n2. No\n");
    scanf("%d",&qqw);
    if(qqw==1)
    {
      goto this;
    }
    else
    {
      printf("bye\n");
    }
    break;
  }
  return 0;
}
