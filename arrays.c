#include<stdio.h>

int main()
{
 double a[5];
 int i;
 
 i=0;
 while(i<5)
 {
  printf("%p: %a \t %p: %a\n", a+i, *(a+i), &a[i], a[i]);
  i++;
 }
  
 printf("Enter 4 numbers\n");
 i=0;
 while(i<4)
  {
   scanf(" %a", &a[i]);
   i++;
  }
  
  //The 5th element in the array will be garbage
  
  i=0;
  while(i<5)
  {
   printf("%p: %a \t %p: %a\n", a+i, *(a+i), &a[i], a[i]);
   i++;
  }
  
 return 0;
}
  
