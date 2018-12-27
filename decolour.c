#include<stdio.h>

int main()
{
 int c=0,i,j,m,n,a[600][600],max,e,f=0;
 FILE *p,*q;
 char fn[20],fn2[20],w;
 
 printf("Enter a input file name: ");
 scanf("%s",fn);
 
  
 printf("Enter a output file name: ");
 scanf("%s",fn2);
 
 p=fopen(fn,"r");
 q=fopen(fn2,"w");
 
 if(p==0)
 {
  printf("not able to read file");
  return 1;
 }
  
 fscanf(p,"%c%d",&w,&e); 
 fscanf(p,"%d%d",&m,&n);
 fscanf(p,"%d",&max);
 
 fprintf(q,"%c%d\n",w,e-1); 
 fprintf(q,"%d %d\n",m,n);
 fprintf(q,"%d\n",max);
 
 for(i=0;i<n;i++)
 {
  f=0;
  c=0;
  for(j=0;j<3*m;j++)
  {
   fscanf(p,"%d",&a[i][j]);
   c=c+a[i][j]/3;
   f++;
   if(f==3)
   {
    fprintf(q,"%d ",c);
    f=0;
    c=0;
   }
  }
   fprintf(q,"\n");
 } 
 
/* for(i=0;i<n;i++)
 {
  for(j=0;j<m;j+3)
  {
   
  }
  fprintf(q,"\n");
 }*/ 
   fclose(p);
   fclose(q);
 
 return 0;
 }
