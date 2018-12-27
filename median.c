#include<stdio.h>

int main()
{
  int a[5],i,j,t;
  printf("Enter five numbers");
  
  for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
  
  for(i=0;i<5;i++)
  {
     for(j=0;j<4;j++)
     {
       if(a[i]>a[j])
       {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       }
     }
   }
   
   printf("median is:%d\n",a[2]);
   return 0;
 }
 
 
 
     
  
