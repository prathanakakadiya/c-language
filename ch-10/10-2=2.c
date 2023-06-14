#include<stdio.h>
 void sum()
{
	int i,lanth=0;
	
	char str[200];
	printf("enter any string : ");
	scanf("%s",&str);
	for(i=0 ;i<200;i++)
	{
		printf("a %s\n",str[i]);
	}

		lanth+=str[i];
		printf("lanth :%s",lanth);
	for(i=0 ;i<200 ;i++)
	{
		printf("%d",lanth);
	}
}
void main()
{
	sum();
}

