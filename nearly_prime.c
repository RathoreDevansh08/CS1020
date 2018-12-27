#include<stdio.h>
#include<math.h>

int prime1(int);

int main()
{
 int n,j,f,z=0;
 printf("Enter a number:");
 scanf("%d",&n);
 f=prime1(n);
 
 if(f==0)
 {
  printf("PRIME\n");
  return 0;
  }
 
 else 
 {
  for(j=2;j<n-1;j++)
  {
   f=prime1(j);
   if(f==0 && n%j==0)
   {
    z++;
   }  
  }
  if(z==2)
  {
   printf("NEARLY PRIME\n");
   return 0;
  }
 }
 
 printf("FAR FROM PRIME\n");
 
 return 0;
}

int prime1(int x)
{
 int m=0,i,l,g=0;
 
 for(i=2;i<=sqrt(x);i++)
 {
  if(x%i==0)
  {
   g=1;
   break;
  } 
 }
 
 return g; 
}  
 
 
