#include<stdio.h>
thum()
{
	int n,i,sum=0;
	printf("enter enay number : ");
	scanf("%d",&n);

	int a[n]/*={6,4,1,5,2,}*/;
	for(i=0 ;i<n ;i++)
	{
		printf("%d\n",a[i]);

	}
	for(i=0 ;i<n ;i++)
	{
		sum+=a[i];
		printf("sum =%d\n",sum);
		}	
}
main()
{
	thum();
}
