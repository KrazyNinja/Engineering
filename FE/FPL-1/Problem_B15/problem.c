/* Write a C program to sort n integers using bubble sort */  
#include<stdio.h>
int main()
{
  int count=0,i=0,j=0;
  printf("Enter the number of element ");
  scanf("%d",&count);
  int array[count];
   for(i=0;i<count;i++)
   {
	array[i]=rand();
   }
   
   int temp=0;
   for(i=0;i<count-1;i++)
   {
	for(j=0;j<count-i-1;j++)
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
	printf("%d\n",array[i]);
   }
}
