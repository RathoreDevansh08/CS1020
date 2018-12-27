#include<stdio.h>

int main()
{
 int i,j,m,n,a[600][600],max,s;
 FILE *p,*q;
 char w;
 p=fopen("cat.pgm","r");
 q=fopen("neg2.pgm","w");
 
 if(p==0)
 {
  printf("not able to read file");
  return 1;
 }
 
 fscanf(p,"%c%d",&w,&s); 
 fscanf(p,"%d %d",&m,&n);
 fscanf(p,"%d",&max);
 
 
 fprintf(q,"%c%c\n",w,s); 
 fprintf(q,"%d %d\n",m,n);
 fprintf(q,"%d\n",max);
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   fscanf(p,"%d ",&a[i][j]);
   a[i][j]=max-a[i][j];
   fprintf(q,"%d ",a[i][j]);
  }
   fprintf(q,"\n");
 } 
   fclose(p);
   fclose(q);
 
 return 0;
 }
   
