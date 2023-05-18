#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();

	printf("enter a n: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("sun 1 to %d:%d\n",n,sum);

	getch();
}