#include<stdio.h>

int main()
{
  int A[]={24 ,56 ,78 ,34 ,2 ,56 ,78},i,j;
  
  printf("Array:\n");
  for(i=0;i<7;i++)
  {
   printf("%d\t",A[i]);
  }
  
  printf("\n\nReverse ordered array:\n");
  for(i=6;i>=0;i--)
  {
   printf("%d\t",A[i]);
  } 
  
  printf("\n");
  
 return 0;
}  
