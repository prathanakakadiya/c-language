#include<stdio.h>
#include<conio.h>
	main()
	{
		int n;
		clrscr();
		printf("enter a value= ");
		scanf("%d",&n);
		(n%2==0)
			?printf("even number")
			:printf("odd number");
		getch();
	}