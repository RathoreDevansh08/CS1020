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
  if(a<=b && b<=c)
  printf("ASCENDING\n");
  else if(a>=b && b>=c)
  printf("DESCENDING\n");
  else
  printf("NEITHER\n");
  return 0;
}  
