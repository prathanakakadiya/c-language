#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter number= ");
scanf("%d",&a);
if(a<0)
{
printf("negative");
}
else if(a==0)
{
printf("neutral");
}
else
{
printf("positive");
}
getch();
}