#include<stdio.h>

int main()
{
 char name[30],no_vow[30],rev_vow[30];
 char *p,*n,*r;
 int count=0;
 
 p=name;
 n=no_vow;
 r=rev_vow;
 
 printf("Enter your first name:");
 scanf("%s",name);
 
 while(*p!='\0')
 {
   if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
   {
    count++;
    *r=*p;
    r=r+1;
   }
   else
   {
    *n=*p;
    n=n+1;
   } 
   p=p+1;
 }
 
 *n='\0';
 *r='\0';
 *p='\0';
 p=name; 
 
 printf("name with reversed vowels=");
 
 while(*p!='\0')
 {
   if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
   {
    r=r-1;
    printf("%c",*r);
   }
   
   else
   {
    printf("%c",*p);
   }
   
   p=p+1;
   
  }
  printf("\n");  
 printf("number of vowels=%d\n",count);
 printf("name without vowels=%s\n",no_vow);

  
return 0;
  
}  
 
