/*
Write a program in C to generate prime numbers between 1 and n
*/

#include<stdio.h>
int main()
{
	int last=0,flag=0;
	printf("Enter value for n ");
	scanf("%d",&last);
	printf("Prime number between 1 and n \n1 \n2 \n3\n");
	for(int i=4;i<=last;i++)
	{
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=0;
			break;
		}
		else
		{
			flag=1;
		}	
	}
	if(flag)
	{
		printf("%d\n",i);
		flag=0;
	}
		
	}

	return 0;
}
