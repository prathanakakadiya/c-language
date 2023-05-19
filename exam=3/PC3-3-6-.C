#include<stdio.h>
#include<conio.h>
 main()
{
    int n,first,last;
    clrscr();
    printf("enter : ");
    scanf("%d",&n);
    first=n%10;

    do
    {
    last=n/10;
    }while(n!=0);
    printf("%d+%d=%d",first+last);
    getch();
}