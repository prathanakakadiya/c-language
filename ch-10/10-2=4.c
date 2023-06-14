#include<stdio.h>
sum()
{
	char str[20];
	int i;
	printf("enter any string : ");
	scanf("%s",&str);
	for(i=0 ;i<20 ;i++)
	{
		if(str[i]>=97 &&str[i]<=122)
		{
			str[i]-=32;
		}
	}
	printf("string : %s",str);
}
main()
{
	sum();
}
