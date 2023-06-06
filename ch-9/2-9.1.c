#include<stdio.h>
main()
{
	char str[20];
	int i;
	printf("enter any string : ");
	scanf("%s",&str);
	
	for(i=0 ;i<200;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}
	printf("string :%s",str);
}
