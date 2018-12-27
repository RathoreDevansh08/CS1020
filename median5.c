#include<stdio.h>

int main()
{
 int n,i,j,h=0,s,sh=0,th=0;
 
 for(i=1;i<=5;i++)
 {
   scanf("%d",&s);
   
   if(s>h)
    {
    th=sh;
    sh=h;
    h=s;
    }
    
    else if(s>sh)
    {
    th=sh;
    sh=s;
    }
    
    else if(s>th)
    {th=s;}
  
  } 
 
 printf("median:%d\n",th);
 return 0;
}

