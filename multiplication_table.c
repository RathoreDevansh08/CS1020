#include<stdio.h>

int main()
{

 int i,n;
 
 printf("Enter an integer:");
 scanf("%d",&n);
 printf("=====================\n");
 
 for(i=1;i<17;i++)
 {
 printf("%d x ",n);
 printf("%d = %2d\n",i,i*n);
 }
 
 printf("=====================\n");
 return 0;
 }
