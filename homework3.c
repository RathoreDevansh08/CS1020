#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  printf("Enter third number:");
  scanf("%d",&c);
  if(a==b || a==c || b==c)
  printf("yes\n");
  else
  printf("no\n");
  return 0;
}
