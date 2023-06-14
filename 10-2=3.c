#include<stdio.h>
sum()
{
	int a,b;
	printf("enter number of a : ");
	scanf("%d",&a);
	printf("enter number of b : ");
	scanf("%d",&b);
	
	printf("addi :%d\n",a+b);
	printf("sub  :%d\n",a-b);
	printf("multi:%d\n",a*b);
	printf("div  :%d\n",a/b);
	printf("modu :%n",a%b);
}
main()
{
	sum();
}
