#include<stdio.h>

int main()
{
 int a[20],n,i,j,l,u;
 printf("Enter value for n(<=20):");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 printf("enter upper limit:");
 scanf("%d",&u);
  
 printf("enter lower limit:");
 scanf("%d",&l); 
 printf("\n\n");
 
 for(i=0;i<n;i++)
  {
   if(a[i]>l && a[i]<u)
    {
     printf("%d\n",a[i]);
    }
  }
 return 0;
} 
