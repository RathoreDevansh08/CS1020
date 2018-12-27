#include<stdio.h>

int main()
{
 int a,b,i=1,j=1,k=1;
 printf("Enter two natural numbers:");
 scanf(" %d  %d",&a,&b);
 printf("=================\n");
 while(i<=a)
 {
 
 while(j<=b)
 {
 printf("%d  \t",k++);
 j++;
 }
 
 j=1;
 i++;
 printf("\n");
 
 }
 printf("=================\n");
 return 0;
} 
