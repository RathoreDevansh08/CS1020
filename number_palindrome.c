#include<stdio.h>

int main()
{
 int m,n=0,i,j;
 printf("Enter a natural number:");
 scanf("%d",&m);
 
 i=m;
 /* Storing initial number for later comparision */
 while(m!=0)
 {
  n = n*10 + m%10;            
  m /= 10;
 }
 
 /* Comparision for palindrome check */
 if(i==n)
 {
  printf("\nits a pallandrome\n");
 }
 else
 {
  printf("\nit is not a pallandrome\n"); 
 }
 
 return 0;
}  
