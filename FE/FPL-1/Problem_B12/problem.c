/*
Write a program in C to compute the GCD of the given two integer
*/

#include<stdio.h>
int main()
{
	int first=0,second=0,max=0,gcd=0;
	printf("Enter first no ");
	scanf("%d",&first);
	printf("Enter second no ");
	scanf("%d",&second);
	
	if(first>second)
	{
		max=first;
	}
	else
	{
		max=second;
	}
	
	for(int i=2;i<=max;i++)
	{
		if (first%i==0 && second%i==0)
		{
			gcd=i;
		}
		
	}
	
	printf("GCD for %d and %d is %d\n",first,second,gcd);

	return 0;
}
