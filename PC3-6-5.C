#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter a= ");
	scanf("%d",&a);
	printf("enter b= ");
	scanf("%d",&b);
	printf("enter c= ");
	scanf("%d",&c);
	printf("enter d= ");
	scanf("%d",&d);
	printf("enter e= ");
	scanf("%d",&e);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is big");
				}
				else
				{
					printf("e is big");
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
				 printf("b is big");
				}
				else
				{
				 printf("e is big");
				}
			}
		}
	}
	getch();
}