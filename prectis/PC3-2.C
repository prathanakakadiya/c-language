#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	clrscr();

	printf("enter a value of n: ");
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++ )
	{
		fact*=i;
	}
	printf("%d",fact);
	getch();
}