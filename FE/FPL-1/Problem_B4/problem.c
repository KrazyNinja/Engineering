/* Write a C program to accept 5 numbers from console and then to display them in ascending order */  
#include<stdio.h>
int main()
{
  int count=5,i=0,j=0;
  int array[5];
printf("Enter 5 numbers\n");

   for(i=0;i<count;i++)
   {
	scanf("%d", &array[i]);
   }
   
   
   int temp=0;
   for(i=0;i<count;i++)
   {
	for(j=0;j<count;j++)
   {
	if (array[i]<array[j])
	{
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;	
	}
   }

   }
   
   printf("Ascending order\n");
   for(i=0;i<count;i++)
   {
	printf("%d ",array[i]);
   }
}
