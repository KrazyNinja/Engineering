/*
Write a program in C to compute the factorial of the given positive integer using recursive function
*/

#include<stdio.h>

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int num=0,factorial=0;
	printf("Enter number ");
	scanf("%d",&num);
	printf("Factorial of %d is %d\n",num,fact(num));

	return 0;
}
