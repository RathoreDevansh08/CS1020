#include<stdio.h>

int main()
{
 int n,i,j,a[20]; 
 
 a[0]=0;
 a[1]=1;
 
 for(i=2;i<20;i++)
 {
  a[i]=a[i-1]+a[i-2];
 }
  
 printf("reverse of fibonacci of 20 numbers:\n");
 for(j=19;j>=0;j--)
 {
  printf("%d ",a[j]);
 }
 
return 0;
}
