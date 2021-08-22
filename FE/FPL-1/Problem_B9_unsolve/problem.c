/*
Write a prgram in C to read an integer and display each of the digit
of the integer in english
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int num=0,mid=0;
	char first[200]="",last[200]="";
	printf("Enter a number ");
	scanf("%d",&num);
	//12
	for (int i=num;i>0;i=i/10)
	{
		mid=i%10;
		if(mid==1)
		{
			strcpy(first," one");//one
			strcat(first,last);
			strcpy(last,first);
			
		}
		else if(mid==2)
		{
			strcpy(first," two");//two
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==3)
		{
			strcpy(first," three");//three
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==4)
		{
			strcpy(first," four");//four
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==5)
		{
			strcpy(first," five");//five
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==6)
		{
			strcpy(first," six");//six
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==7)
		{
			strcpy(first," seven");//seven
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==8)
		{
			strcpy(first," eight");//eight
			strcat(last,first);
			strcpy(last,first);
		}
		else if(mid==9)
		{
			strcpy(first," nine");//nine
			strcat(last,first);
			strcpy(last,first);
		}
		else
		{
			strcpy(first," zero");//zero
			strcat(last,first);
			strcpy(last,first);
		}
	}
		
		printf("%s\n",last);
	
	return 0;
}
