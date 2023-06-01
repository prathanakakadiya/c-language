#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter number of row : ");
	scanf("%d",&r);
	printf("enter number of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,avg,sum=0; 
	float n;
	
	for(i=0 ; i<r ;i++)
	{
		for(j=0 ;j<c ;j++)
		{
	printf("a[%d][%d]: ",i,j);
	scanf("%d",&a[i][j]);
	sum+=a[i][j];
		}
	}
	n=r*c;
	avg=sum/n;
	
	printf(" number of avg : %d",avg);	
	
	
	
}
