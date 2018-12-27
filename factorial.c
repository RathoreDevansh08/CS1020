#include<stdio.h>

int main()
{
  unsigned int n,f=1,i;
  
  printf("Enter a positive natural number:");
  scanf("%d",&n);
  
  for( i=1;i<=n;i++)
  {
    f=f*i;
  }
  
  printf("\nThe factorial is:%d\n",f);
  
return 0;
}  
  
