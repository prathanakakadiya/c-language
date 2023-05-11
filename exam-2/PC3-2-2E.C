#include<stdio.h>
#include<conio.h>
	main()
	{
		int unit,bill;
		clrscr();
		printf("enter unit= ");
		scanf("%d",&unit);

		if(unit>=0 && unit<=50)
		{
		   bill= unit*0.5;
		   printf("bill=%d",bill+(bill*20/100));
		}
		else if(unit>=50 && unit<= 150)
		{
		bill=25+(unit-50)*0.75;
		   printf("bill=%d",bill+(bill*20/100));
		}
		else if(unit>=150 && unit<=250)
		{
		bill=100+(unit-150)*1.2;
		   printf("bill=%d",bill+(bill*20/100));
		}
		else if(unit>=250)
		{
		bill=220+(unit-250)*1.5;
		  printf("total amount=%d",bill+(bill*20/100));
		}
		else
		{
		  printf("invalide input");
		}
		getch();
	}