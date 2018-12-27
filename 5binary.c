#include<stdio.h>
#include<math.h>                   //included math.h

int main()
{
 int i,a[5],t,n,j=0,m=0;
 long int b[5];
 FILE *f1;
 
 f1=fopen("5binary.txt","w");       //opening the file 
 
 printf("Enter five integers:");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);                //scaning the number
  t=a[i];
  j=0;
  m=0;
  while(a[i]!=0)                    //calculating the binary of each number
 {
  m+=(a[i]%2)*(pow(10,j));
  a[i]=a[i]/2;
  j++;
 }
  fprintf(f1,"The binary of %d is :%d\n",t,m);    //printing in another file
  
 }
 fclose(f1);
 return 0;
} 
  
