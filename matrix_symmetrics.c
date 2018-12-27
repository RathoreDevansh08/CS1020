#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 float matrix[100][100];
 int m, n, i, j,f=0,l;
 
/* Ask the user to give the name of the file which contains the matrix */
  printf("Enter the file name: ");
  scanf("%s", filename);
  
/* Open the file for reading */
 fp = fopen(filename, "r");

 if (fp == 0)
 {
  printf("Error in opening the file %s.\n", filename);
  return(1);
 }
 
 fscanf(fp, "%d", &m);
 fscanf(fp, "%d", &n);
 
 /*Checking if its a square matrix */
 if(m==n)
 {
  printf("\nIts a square matrix\n");
  f=1;
 }
 else
 {
  printf("\nIts not a square matrix\n"); 
 }
 
 for(i = 0; i < m; i++)
 {
  for(j = 0; j < n; j++)
  {
   fscanf(fp, "%f", &matrix[i][j]);               /* Read one entry */
  }
 }
 
/* Code to compare with the transpose matrix */
if(f==1)
{
 for(i = 0; i < n; i++)
 {
  for(j = 0; j < m; j++)
   {
    if(matrix[i][j]==matrix[j][i])
    {
     l++;
    } 
    else if(matrix[i][j]==-matrix[j][i])
    {
     l--;
    }           
   }
  }
 }
 else
 {
  printf("\n Not a symmetric matrix\n");
  return 2;
 } 
 if(l==m*n)
 {
  printf("SYMMETRIC\n");
  return 0;
 }  
 else if(l==-m*n)
 {
  printf("SKEW SYMMETRIC\n");
  return 2;
 } 

fclose(fp);                                       /* Close the file */
return(0);
}
