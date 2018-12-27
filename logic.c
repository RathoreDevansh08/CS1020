#include<stdio.h>

int main()
{
  int n,a,max,counter;
  printf("Enter a natural number:");
  scanf("%d",&n);
  counter=0;
  
  if(n==0)
  { 
   printf("No numbers to compare");
  }
  
  else
  {
  scanf("%d",&a);
  max =a;
  counter=1;
  
  while(counter<n)
  {
   scanf("%d",&a);
   
   if(a>max)
   {
     max=a;
   }
   
   counter++;
   
  }
  
  printf("The maximum out of those numbers is:%d\n",max);
 }
 
 return 0;
}   
   
