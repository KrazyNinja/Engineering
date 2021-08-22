/*
Write a program in C to generate first 20 fibonacci
*/
#include<stdio.h>
int main()
{
	int first=0,second=1,third;
	printf("Fibonacci series upto 20\n%d\n",first);
	printf("%d\n",second);
	for (int i=3;i<=20;i++)
	{
		third=first+second;
		printf("%d\n",third);
		first=second;
		second=third;
	}	
	return 0;
}
