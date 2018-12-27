#include<stdio.h>

int main()
{
 int a[20],n,counter,temp,m,t;
 printf("enter n(<=20) \n");
 scanf("%d",&n);
 
 if(n>20)
 {
  printf("wrong input \n");
 }
 
 else
 {
  counter=0;
  
  while(counter<n)
  {
  printf("enter the next element \n");
  scanf("%d",&a[counter]);
  counter=counter +1;
  }
  
  temp=a[0];
  counter=n-1;
  m=a[n-1];
  
  while(counter>=0)
  {
   t=a[counter-1];
   a[counter-1]=m;
   m=t;
   counter =counter-1;
  }
  
  a[n-1]=temp;
  counter=0;
  printf("\n");
  
  while(counter<n)
  {
   printf("%d\n",a[counter]);
   counter=counter+1;
  }
  
 }
return 0;
}      
