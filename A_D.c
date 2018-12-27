#include<stdio.h>

int main()
{
  int i,n,a=0,d=0;
  
  printf("Enter a natural number:");
  scanf("%d",&n);
  
  int A[n];
  
  for(i=0;i<n;i++)
  {
   scanf("%d",&A[i]);
  }
  
  for(i=0;i<n-1;i++)
  {
   if(A[i]>A[i+1])
   {d++;}
   else if(A[i]<A[i+1])
   {a++;}
  }
  
  if(d==n-1)
  printf("Strictly descending\n");
  
  else if(a==n-1)
  printf("Strictly ascending\n");
  
  else
  printf("neither\n");
  
  return 0;
  }
