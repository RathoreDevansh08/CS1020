#include<stdio.h>

int main()
{
 int n,i=0,j=0;
 
 printf("Enter a natural number:");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if((i+j)%2==0)
   { 
    printf("o\t");
   }
   else
   {
    printf("x\t");
   }
  }
  j=0;
  printf("\n");
 }
 
 return 0;
}     
