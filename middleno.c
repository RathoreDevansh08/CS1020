#include<stdio.h>

int main()
{
  int a,b,c,l,s,m;
  printf("Enter a number");
  scanf("%d",&a);
  printf("Enter second number");
  scanf("%d",&b);
  printf("Enter third number");
  scanf("%d",&c);
  m=a;
  if((c>=a && b>=c) || (c<=a && c>=b))
  m=c;
  else if((b>=a && c>=b) || (b<=a && b>=c))
  m=b;
  printf("middle number is:%d\n",m);
  return 0;
}  
  
  
  
