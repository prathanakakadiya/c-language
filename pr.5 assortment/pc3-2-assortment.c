#include<stdio.h>
main()
{
	int r,c;
	printf("enter a row : ");
	scanf("%d",&r);
	printf("enter a column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]:%d\n",i,j,a[i][j]);		
		}
	}	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j>10)
			{
				printf("a[%d][%d]:%d\n",i,j,a[i][j]);
			}
		}
	}
}
