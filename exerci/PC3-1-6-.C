#include<stdio.h>
#include<conio.h>
	main()
	{
		int i=1,n,sum=0;
		clrscr();

		printf("enter a avlue of n= ");
		scanf("%i",&n);

		while(i<=n)
			{
			if(i%2==1)
			{

			sum=sum+i;

			}
			 i++;
			}
		printf("%d\n",sum);
		getch();
	}