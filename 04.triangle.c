// check whether a triangle is Equilateral, Isosceles or Scalene.

#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter the sides of a triangle:");
  scanf("%d%d%d",&a,&b,&c);

  if(a==b && b==c && c==a)
    printf("the triangle is equilateral");
  else if (a==b || a==c || b==c)
    printf("the triangle is isosceles");
  else
    printf("the triangle is scalene");
}