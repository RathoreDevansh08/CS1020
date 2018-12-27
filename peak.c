#include<stdio.h>

int main()
{
 int n,a[100],i,j=0,b[100];
 
 printf("Enter the number of values:");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=1;i<n-1;i++)
 {
  if(a[i]>a[i-1] && a[i]>a[i+1])
   {
    b[j]=a[i];
    j++;
   }
 }
 
 printf("There are %d peaks:",j);
 for(i=0;i<j;i++)
 {
  printf(" %d ",b[i]);
 }
 
return 0;
} 
