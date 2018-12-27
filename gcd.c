#include<stdio.h>
int gcd(int,int);  
  
int main()
{
 int a,b,i,j;
 
 printf("Enter two integers:");
 scanf("%d  %d",&a,&b);
 
 i=gcd(a,b);
 printf("gcd of a and b is:%d\n",i);
 
 return 0;
 
 }
 
 int gcd(int m,int n)
 {
   if (n != 0)
   return gcd(n, m % n);
    
   else 
   return m;
  }         
   

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
