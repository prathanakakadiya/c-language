#include<stdio.h>
main()
{
	int i,sum;
	int a[5]={7,4,9,5,2};
	int b[5]={1,3,1,7,3};
	int c;
	for(i=0 ; i<5 ;i++)
	{
		printf("a:%d\n",a[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		printf("b:%d\n",b[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		c=a[i]+b[i];
		printf("sum=%d\n",c);
	}
}
