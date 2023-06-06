#include<stdio.h>


main()
{
	
	char str[200];
	int i;

	printf("enter any string : ");
	scanf("%s",&str);
	
	for(i=0 ;i<200;i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
	}
	printf("string :%s",str);
}
