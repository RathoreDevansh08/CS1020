#include<stdio.h>

int main()
{
 int a[10],i=0,j,e=0,b=0;
 
 printf("Enter 10 values:");
 for(j=0;j<10;j++)
 {
  scanf("%d",&a[j]);
 }
 
 for(j=0;j<10;j++)
 { 
 
  if(a[9]==a[j])
  {
   e++;
  }
 
  if(a[j]<a[9])
  {
   b++;
  }
 
 }
 printf("\nnumber of times last number is repeated=%d\n",e);
 printf("\nnumber of values lesser than last value=%d\n",b);
 
return 0;
}
 
