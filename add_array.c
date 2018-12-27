#include<stdio.h>

int main()
{

 int a[5],b[5],c[5],i;
 int counter=0;
 
 printf("Enter 5 numbers in the first array\n");
 while(counter<5)
 {
  scanf("%d",&a[counter]);
  counter=counter +1;
 }
 
 counter=0;
 printf("Enter 5 numbers in the second array\n");
 while(counter<5)
 {
  scanf("%d",&b[counter]);
  c[counter]=a[counter]+b[counter];
  counter=counter +1;
 }
 
 counter=0;
 while(counter<5)
 {
  printf(" %d\n ",c[counter]);
  counter++;
 }
 
return 0;
}
 
