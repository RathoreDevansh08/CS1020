#include <stdio.h>

float calc(char[]);

int main()
{
  char name[25],t,g[4];
  FILE *f,*h;
  f=fopen("grades02.txt","r");
  h=fopen("cgpa02.txt","w");
  if(f==NULL)
  {
    printf("File doesnt exist\n");
    return 1;
  }
  while(fscanf(f,"%s %c %c %c %c %c %c %c",name,&g[0],&t,&g[1],&t,&g[2],&t,&g[3])!=EOF)
    fprintf(h,"%s %c, %c, %c, %c, %g\n",name,g[0],g[1],g[2],g[3],calc(g));
  fclose(f);
  fclose(h);
  return 0;
}

float calc(char g[4])
{
  int i;
  float cgpa=0;
  for(i=0;i<4;i++)
    switch(g[i])
    {
      case 'A':
        cgpa+=10;
        break;
      case 'B':
        cgpa+=8;
        break;
      case 'C':
        cgpa+=6;
    }
  return (float)cgpa/4;
}
  
    
