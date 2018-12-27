#include<stdio.h>

int main()
{
 FILE *p;    //p is a file pointer
 char c;
 int success;
 
 p=fopen("print_me.c","r");                   /*Open the file test.c in read-only mode and assign its handle to   p*/ 
 
 if(p==0)                                     /*Check if the file was opened correctly*/
 {
  printf("Error inopening the file\n");
  return(1);
 }
 
 do
 {
  success=fscanf(p,"%c",&c);                  /*read next character from file*/ 
  printf("%c", c);                            /*print the character read*/
 }
 while(success==1);                           /*while it is able to read*/
 
 fclose(p);                                   /*to close the file*/
 return (0);
} 
 
