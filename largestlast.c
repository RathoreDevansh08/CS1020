#include<stdio.h>

int main()
{
 int a[20],n,i,j,l;
 printf("Enter value for n(<=20):");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  
  if(i==0)
  l=a[i];
  
  if(a[i]>l)
  {
   j=i;
   l=a[i];
  } 
 }
 
 a[j]=a[j]+a[n-1];
 a[n-1]=a[j]-a[n-1];
 a[j]=a[j]-a[n-1];
 printf("\n");
 
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 
 return 0;
 }
 
  
