#include<stdio.h>

main()
{
	char str1[20];
	
	printf("enter your string : ");
	gets(str1);
	
	int i,j,e;
	if(str1[20]>65 &&str1[20]<90)
	{
		i=strlen(str1);
	}
	else if(str1[20]>97 && str1[20]<122)
	{
		j=strlen(str1);
	
	}
	else if(str1[20]>48 &&str1[20]<57)
	{
		e=strlen(str1);
	
	}
	puts(i);
	puts(j);
	puts(e);
}
