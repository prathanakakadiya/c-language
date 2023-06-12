#include<stdio.h>

void sum()
{
	int a;
	
	printf("enter a : ");
	scanf("%d",&a);

	
	if(a%3==0 && a%5==0)
	{
		printf("this number is diveded by 3 or 5");
	}
	else
	{
		printf("this number is not diveded by 3 or 5");
	}
}
void main()
{
	sum();
}


