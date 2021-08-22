/*
Write a C program to accept string and to display
1.Total no of characters
2.No of vowels
3.Total number of occurence of character 'a'
4. Total no of occurrence of string 'the'
*/
#include<stdio.h>
#include <string.h>
int main()
{
	char keyword[100];
	int vowel=0,a=0,occurence=0;
	fgets(keyword, 101, stdin);
	int len=strlen(keyword)+1;
	printf("String length %d\n",len); 

	for (int i=0;i<len;i++)
	{
		if( toupper(keyword[i])=='E' || toupper(keyword[i])=='I' || toupper(keyword[i])=='O' || toupper(keyword[i])=='U')
		{
			++vowel;
		}
		else if (toupper(keyword[i])=='A' )
		{
			++a;
			++vowel;
		}
		else
		{
		
		}
	}
	
	printf("Vowel count %d\n",vowel); 
	printf("Character a count %d\n",a);
	
	for (int j=0;j<len-3;j++)
	{
		if(keyword[j]=='t' && keyword[j+1]=='h' && keyword[j+2]=='e')
		{
			++occurence;
		}
	}
	
	printf("Count of word the %d\n",occurence);
	return 0;
}
