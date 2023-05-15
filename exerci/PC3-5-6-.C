#include<stdio.h>
#include<conio.h>
	main()
    {
	int i=1,n;
	clrscr();
	printf("enter a value n= ");
	scanf("%d",&n);

	while(i>=n)
	{
		printf("%d",n);
		i--;
	}
	getch();

   }