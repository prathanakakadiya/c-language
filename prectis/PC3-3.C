#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();

	printf("enter n: ");
	scanf("%d",&n);

	for(i=1 ; i<=10 ; i++)
	{
		printf("%d %d %d\n",i,n,i*n);
	}
	getch();
}
