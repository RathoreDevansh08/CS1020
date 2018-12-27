#include<stdio.h>

int main()
{
 int n,i=0,j=0;
 
 printf("Enter a natural number:");
 scanf("%d",&n);
 
 while(i<n)
 {
  while(j<n)
  {
   if((i+j)%2==0)
   { 
    printf("o\t");
   }
   else
   {
    printf("x\t");
   }
   j++;
  }
  j=0;
  printf("\n");
  i++;
 }
 return 0;
}     
