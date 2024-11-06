// find the largest no. among the three no. entered by the user

#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter the three no.s: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    printf("%d is the largest no.",a);
  else if(b>c && b>a)
    printf("%d b is the largest no.",b);
  else
    printf("%d is the largest no.",c);
}
