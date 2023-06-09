#include<stdio.h>

main()
{
	
	char string1[20],string2[20];
	
	printf("\nenter your string : ");
	gets(string1);
	
	int cmp;
	
	cmp=strcmp(string2,string1);
	
	if(cmp==0)
	{
		printf("\nnumber is palindrom number...");
	}
	else
	{
		printf("\nnumber is not palindrom number...");
	}
}
