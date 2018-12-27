#include <stdio.h>

float avg(int[],int);
char grade(int,float);

int main()
{
  int i,j,a[50],b[50],c[50],d[50];
  char name[50][25];
  FILE *f;
  FILE *p;
  f=fopen("data02.txt","r");
  p=fopen("grades02.txt","w");
  

  if(f==NULL)
  {
    printf("File doesnt exist\n");
    return 1;
  }

for(i=0;;i++)
    if(fscanf(f,"%s %d, %d, %d, %d",name[i],&a[i],&b[i],&c[i],&d[i])==EOF)
      break;
  fclose(f);
  f=fopen("grades02.txt","w");
  for(j=0;j<i;j++)
    fprintf(f,"%s %c, %c, %c, %c\n",name[j],grade(a[j],avg(a,i)),grade(b[j],avg(b,i)),grade(c[j],avg(c,i)),grade(d[j],avg(d,i)));
  fclose(f);
  fclose(p);
  return 0;
}  
  

float avg(int x[50],int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
      sum=sum+x[i];

  return (float)sum/size;
}
 
char grade(int x,float avg)
{
  if(x<avg/2)
    return 'F';

  if(x<avg)
    return 'C';

  if(x<2*avg)
    return 'B';

  return 'A';
}
