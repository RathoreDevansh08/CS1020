#include<stdio.h>
#include<math.h>

int main()
{
 int m=0,n,i=0,j;
 
 printf("Enter a natural number:");
 scanf("%d",&n);
 
 j=n;
 /* To save the initial number for later use */
 while(n!=0)
 {
  m+=(n%2)*(pow(10,i));
  /* Saving remainedr of each iteration in m and shifting the value accordingly */
  n=n/2;
  i++;
 }
 
 printf("the binary form of %d is: %d\n",j,m);
 
 return 0;
 } 
  
 
