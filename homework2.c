#include<stdio.h>

int main()
{
  int a,b,c;
  float d,e,f;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  c=a/b;
  d=a;
  e=b;
  f=d/e;
  
  if(f < (c + 0.5))
  printf("%d\n",c);
  
  else if(f = c + 0.5)
  printf("%d\n",c+1);
  
  else
  printf("%d\n",c);
  
  return 0;
  }
  
