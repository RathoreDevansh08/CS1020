#include<stdio.h>

int main()
{
  int a,b,c,l,s;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  printf("Enter third number:");
  scanf("%d",&c);
  l=a;s=b;
  if(b>a)
  {
  l=b;
  s=a;
  }
  if(l<c)
  {l=c;}
  if(c<s)
  {s=c;}
  printf("largest:%d\nsmallest:%d\n",l,s);
  return 0;
}  
  
