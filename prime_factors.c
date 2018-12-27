#include<stdio.h>
#include<math.h>

int main()
{
 int n,i,j,f=0;
 
 printf("Enter a natural number:");
 scanf("%d",&n);
 
 printf("Prime factors (if existing) without 1 and the number itself are:\n"); 
 for(i=2;i<n;i++)
 {
  if( n%i==0 )
  {
   
   for(j=2;j<=sqrt(i);j++)
   {
    if(i%j==0)
    {
     f++;
     break;
    }
   }
   
   if(f==0)
   {
    printf("%d ,",i);
   }
   f=0;
  } 
 }  
 printf("\b\b\n"); 
 return 0;
}     
