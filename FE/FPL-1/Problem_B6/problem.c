/*
Write a C program to accept the length of threee sides of a triangle and print the type of triangle - equilateral, isoceles, right angled and scalene
*/
#include<stdio.h>
int main()
{
  int side1=0,side2=0,side3=0;
  
  printf("Side 1 length ");
  scanf("%d",&side1);
  printf("Side 2 length ");
  scanf("%d",&side2);
  printf("Side 3 length ");
  scanf("%d",&side3);
  
  if (side1==side2 && side2==side3)
  {
  	printf("Equilateral triangle\n");
  }
  else if( side1==side2 || side2==side3 || side3==side1)
  {
  	printf("Isoceles triangle\n");
  }
  else if( side1*side1==side2*side2+side3*side3 || side2*side2==side1*side2+side3*side3 || side3*side3==side2*side2+side1*side1)
  {
  	printf("Right angle triangle\n");
  }
  else
  {
  	printf("Scalene triangle\n");
  }
  
}
