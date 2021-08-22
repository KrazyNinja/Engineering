/* Write a C program to carry following operation on strings using library functions 
1.To concatenate a string S2 to string S1
2.To find the lngth of a given string
3.To compare two string S1 and S2.
4.To copy a string S2 to another string S1.
*/  
#include<stdio.h>
#include <string.h>
int main()
{
  char S1[100],S2[100],S3[100];
  int choice=0;
    printf("Enter string 1 ");
    scanf("%s",&S1);
    printf("Enter string 2 ");
    scanf("%s",&S2);
    
    printf("Enter you choice\n1.Concatenate\n2.Length of a string\n3.Compare string S1 and S2\n4.To copy string S2 to another string S1 ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
    	printf("%s\n",strcat(S1,S2));
    }
    else if(choice==2)
    {
    	printf("Enter a string ");
    	scanf("%s",&S3);
    	int len=strlen(S3);
    	printf("%d\n",len);
    }
    else if(choice==3)
    {
    	choice=strcmp(S1,S2);
    	if(choice)
    	{
    		printf("Unequal string");
    	}
    	else
    	{
    		printf("Equal string");
    	}
    }
    else if(choice==4)
    {
    	strcpy(S1,S2);
    	printf("%s",S1);
    }
    else
    {
    	printf("Wrong choice\n");
    }
	

    
}
