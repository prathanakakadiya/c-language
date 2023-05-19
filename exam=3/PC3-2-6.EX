#include<stdio.h>
#include<conio.h>
	main()
	{
	int n,mat=0;
	clrscr();
	printf("enter : ");
	scanf("%d",&n);

	do
	{
		n=n/10;
		mat++;
	} while(n!=0);
	printf("%d",mat);
	getch();
	}