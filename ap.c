#include<stdio.h>

int main()
{

 int i,j,n;
 double d,a,s;
 
 printf("Enter the value for number of terms in ap:");
 scanf("%d",&n);
 printf("Enter the value for first term in ap:");
 scanf("%lf",&a);
 printf("Enter the value for common difference in ap:");
 scanf("%lf",&d);
 s = ((n)*(2*a+(n-1)*d))/2;
 printf("the sum of ap is: %lf", s);
 return 0;
} 
 
