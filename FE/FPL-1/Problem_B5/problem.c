/* Write a C program to calculate the som of all numbers from 0 to 100 that are divisible by 4 */
#include<stdio.h>
int main()
{
  int count=100,sum=0,i=0;
  
   for(i=0;i<=count;i++)
   {
	if(i%4==0)
	{
		sum=sum+i;
	}
   }
   
   printf("Sum of number from 0 to 100 divisible by 4 are %d\n",sum);
  
}
