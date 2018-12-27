#include<stdio.h>

int main()
{
  int n,i,m,j,t;
  
  printf("Enter the value of n:");
  scanf("%d",&n);
  
  int A[n],B[n];
  
  for(i=0;i<n;i++)
  {
   B[i]=0;
   scanf("%d",&A[i]);
  }
  
  for(i=0;i<n;i++)
   {
    for(j=i;j<n;j++)
    {
     if(A[i]==A[j])
     {
      (B[i])++;
     }
    }
   }
    
    m=B[0];
    printf("mode is:");
    
    for(i=0;i<n;i++)
    {
     if(m<=B[i])
      {
       m=B[i];
       t=A[i];
       printf("%d %d\n",A[i],B[i]);
      }
    }
    
  
  
  return 0;
  }
