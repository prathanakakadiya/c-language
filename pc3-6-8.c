#include<stdio.h>

main()
{
	int n2, n1;
	
	printf("enter n2 : ");
	scanf("%d",&n2);
	printf("enter n1 : ");
	scanf("%d",&n1);
	
	int a[20],i,index=0;
  
	  
	  	
    for(i=n2 ;i<n1 ; i++)
   	  {
		if(i%4==0)
		{
			a[index]=i;
			index++;
		}
	}

	printf("leap year :");
	for(i=0 ;i<n1 ;i++)
	{
	
	printf("%d",index);
	}

}
