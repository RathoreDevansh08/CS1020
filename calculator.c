#include<stdio.h>

int main()
{
 float x,y,ans;
 char op;
 _Bool r=1;
 while(r==1)
 {
  scanf("%f%c%f",&x,&op,&y);
  
  if(op=='+')
   {
    ans=x+y;
    printf("%g\n\n",ans);
   }
  
  else if(op=='-')
   {
    ans=x-y;
     printf("%g\n\n",ans);
   }  
   
   else if(op=='x'|| op=='*')
   {
    ans=x*y;
     printf("%g\n\n",ans);
   } 
   
   else if(op=='/')
   {
    if(y==0)
     printf("ERROR:Division by zero\n");
    else 
    {ans=x/y; printf("%g\n\n",ans);}
   }   
 
  else
   {
    printf("Syntax error.\n\n");
   }
  
  printf("Continue(1/0):"); 
  scanf("%i",&r);
  
  }
  return 0;
 }
     
    
