#include<stdio.h>
int main()
{
  int a,d;
  float sum,n;
  printf("Enter the first term of the AP\n");
  scanf("%d",&a);
  printf("Enter the common difference of the AP\n");
  scanf("%d",&d);
  printf("Enter the value of n\n");
  scanf("%f",&n);
  sum=(n/2)*(2*a+(n-1)*d);
  printf("sum of n terms of the AP is %f\n",sum);
  return 0;
}
