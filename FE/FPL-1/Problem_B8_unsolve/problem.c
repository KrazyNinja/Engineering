/*
WRITE A CLASS TO CONVERT CHARACTER sTRING OF LOWERCASE TO UPPERCASE & NUMERIC DIGIT IN REVERSE ORDER

A-Z(65-90)
a-z(97-122)
*/

#include<stdio.h>
#include <string.h>


typedef struct Alpha
{
    char alphabet[100];

	void convert();

}al;

void convert()
{
	int len=strlen(aplhabet)+1;
	for(int i=0;i<len;i++)
	{
		if((int)alphabet[i]>96 && (int)alphabet[i]<123)
		{
			alphabet[i]=(char)((int)alphabet[i]-32);
		}
	}
}


int main()
{
	char word[100];
	fgets(word, 101, stdin);
	Alpha al;	
	return 0;
}
