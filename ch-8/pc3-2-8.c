#include<stdio.h>
main()
{
	int i,avg;
	
	int sum=0;
	int a[5]={12,42,18,50,26};
	
	for(i=0 ; i<5 ;i++)
	{
		printf("a :%d\n",a[i]);
	}
	sum=a[0]+a[1]+a[2]+a[3]+a[4];
	
	
	avg=sum/4;
	printf("number of avg :%d\n",avg);
}
