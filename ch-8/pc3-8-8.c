#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter number of row : ");
	scanf("%d",&r);
	printf("enter number of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	for(i=0 ;i<r; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int r1,c1;
	
	printf("enter number of row : ");
	scanf("%d",&r1);
	printf("enter number of column : ");
	scanf("%d",&c1);
	
	int b[r1][c1];
	
	for(i=0 ;i<r1 ;i++)
		{
		for(j=0 ; j<c1 ; j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int sum=0,d;
	sum=a[r][c]+b[r1][c1]
	
	for(i=0 ; i<a[r][c]+b[r1][c1] ;i++)
	{
		for(j=0 ;j<a[r][c]+b[r1][c1] ;j++)
		{
			if (i==j)
			{
			printf("%d",d);
			printf("%d",sum);
			}
			else
			{
				printf(" ");
			}
		}
	printf("\n");
	}
	
}
