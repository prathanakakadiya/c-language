#include<stdio.h>

main()
{
	int n1,n2;
	printf("enter n1 : ");
	scanf("%d",&n1);
	
	printf("enter n2 : ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2],i;
	
	for(i=0 ;i<n1 ;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ;i<n2 ;i++)
	{
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0 ; i<n1 ; i++)
	{
		c[i]=a[i];
	}
	
	for(i=0 ; i<n2 ; i++)
	{
		c[i+n1]=b[i];
	}
	printf("marje : ");
	for(i=0 ; i<n1+n2 ; i++)
	{
		printf("%d",c[i]);
	}
	
}
	
