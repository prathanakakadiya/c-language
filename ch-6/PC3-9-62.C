#include<stdio.h>
#include<conio.h>
	main()
	{
	int a=1,b,n,next,i;
	clrscr();
	printf("enter : ");
	scanf("%d",&n);
	printf("enter: ");
	scanf("%d",&b);
	next=a+b;
	for(i=1;i<=n;i++)
		{
		printf("\n%d",next);
		a=b;
		b=next;
		next=a+b;
		}
	getch();
	}
