#include<stdio.h>

int main()
{
 int i,j,k,l;
 char s1[50],s2[50];
 FILE *ip, *op;
 
 ip=fopen("d1.txt","r");                              //opening the file
 op=fopen("d2.txt","w");
 
 if(ip==0)
 {
  printf("can't open the file!\n");
  return 1;
 } 
 
 for(i=0;i<20;i++)
 {
  fscanf(ip,"%s %s %d",s1,s2,&k);                     //scaning the text
  
  if(k>90 && k<=100)                                  //finding the grade
  {
   fprintf(op,"%s %s \t:\t\tS\n",s1,s2);
  }
  else if(k>75 && k<=90)
  {
   fprintf(op,"%s %s \t:\t\tA\n",s1,s2);
  }
  else if(k>60 && k<=75)
  {
   fprintf(op,"%s %s \t:\t\tB\n",s1,s2);
  }
  else if(k>50 && k<=60)
  {
   fprintf(op,"%s %s \t:\t\tC\n",s1,s2);
  }
  else
  {
   fprintf(op,"%s %s \t:\t\tU\n",s1,s2);
  }
  
 }
 
 fclose(ip);                                         //closinh the files
 fclose(op);
 
 return 0;
} 
   
