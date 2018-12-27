#include<stdio.h>

int main()
{
 int n,i=0,j=0;
 
 printf("Enter a natural number:");
 scanf("%d",&n);
 
 do
 {
  do
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
  while(j<n);
  j=0;
  printf("\n");
  i++;
 }
 while(i<n);
 
 return 0;
}     
