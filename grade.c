#include<stdio.h>

int main()
{
   int marks;
   printf("Enter your marks:");
   scanf("%d",&marks);
   if( marks>=90)
   printf("A\n");
   else if( marks<40)
   printf("FAIL\n");
   else if( marks<80)
   printf("C\n");
   else if(marks<90)
   printf("B\n");
   return 0;
 }  
   
    
  
