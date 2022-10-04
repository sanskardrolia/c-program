/*This is for
multiplication */
#include <stdio.h>
int main() {
  printf("Enter The Number\n");
  int n,t=0,i=1;
  scanf("%d",&n);
  do {
    t=n*i;
    printf("%d\n",t);
    i++;
  } while(i<=10);

  return 0;
}
