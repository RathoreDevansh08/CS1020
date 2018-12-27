#include<stdio.h>

int main()
{
 int a[20][20],b[20][20],i,j,n1,n2,m1,m2;
 
 printf("Enter the dimensions of the first matrix");             //taking input for the dimensions of matrices
 scanf("%d %d",&n1,&n2);
 printf("\nEnter the dimensions of the second matrix");
 scanf("%d %d",&m1,&m2);
 
 if(n1!=m1 || n2!=m2)
 {
  printf("\ndimensions mismatch:matrices cannot be equal\n");    //checking for equal dimensions
  return 1;
 } 
 
 printf("enter the elements for the first matrix");              //entering the elements in matrices
 for(i=0;i<n1;i++)
 {
  for(j=0;j<n2;j++)
  {
   scanf("%d ",&a[i][j]);
  }
 }
 printf("\nenter the elements for the second matrix");
 for(i=0;i<m1;i++)
 {
  for(j=0;j<m2;j++)
  {
   scanf("%d ",&b[i][j]);
  }
 }
 
 for(i=0;i<n1;i++)                                              //comparing elements
 {
  for(j=0;j<n2;j++)
  {
   if(a[i][j]!=b[i][j])
   {
    printf("\nmatrices unequal\n");
    return 1;
   }
  }
 }
 printf("\nmatrices are equal\n");
 
 return 0;
 }   
 
  
 
