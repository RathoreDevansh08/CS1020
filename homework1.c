#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  if(a%2==0 && b%2==0)
  printf("EVEN");
  else if(a%2!=0 && b%2!=0)
  printf("EVEN\n");
  else
  printf("ODD\n");
  return 0;
}
  
