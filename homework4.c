#include<stdio.h>

int main()
{
 int n,i,h=0,s,sh=0,th=0,l=100,sl;

 printf("Enter a natural number:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
   scanf("%d",&s);
   
   if(s>h)
   {
   th=sh;
   sh=h;
   h=s;
   }
    
   else if(s>sh)
   {
   th=sh;
   sh=s;
   }
    
   else if(s>th)
   {th=s;}
   
   if(s<l)
   {
   sl=l;
   l=s;
   }
    
 } 
 
 printf("Highest:%d\n3rd Highest:%d\n2nd Lowest:%d\n",h,th,sl);
 return 0;
}
