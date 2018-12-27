/* 
 Program name: average.c
 Program description: The program takes two integers as input and displays their average.
 Programmer's name: DEVANSH SINGH 
 Date: 11-01-2017
*/
#include<stdio.h>

int main()
{
  /*x and y are two variables tostore the two inputs */
  float x,y;
  /* z is a variable to store the average of x and y*/
  float z;
  /*Prompt the user to enter the first number and read it */
  printf("Enter the first number:");
  scanf("%f",&x);
  /*Prompt the user to enter the second number and read it */
  printf("Enter the second number:");
  scanf("%f",&y);
  /*compute the average */
  z=(x+y)/2;
  /* Display the result */
  printf("The average of %f and %f is %f.\n",x,y,z);
  /* Tell the operating system that eveything went well */
  return 0;
}  
