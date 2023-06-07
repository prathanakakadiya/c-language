#include<stdio.h>

main()
{
	char name[20];
	int i,l,s,a,n,len;
	printf("enter your name : ");
	gets(name);
	
	for(i=0 ;i<6;i++)
	{
		if(name[i]>48 &&name[i]<57)
		{
			n++;
		}
		else if(name[i]>65&&name[i]<90)
		{
			a++;
		}
		else if(name[i]>97&&name[i]<122)
		{
			l++;
		}
		else
		{
			s++;
		}
		if(n==0&&a==0&&l==0&&s==0&&len==6)
		{
			printf("your password is strong\n______________________");
		}
		else
		{
			printf("your password is not strong\n");
		}
	}
	
}
