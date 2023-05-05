#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter number= ");
scanf("%d",&a);
if(a>= 90)
{
printf("A1");
}
else if(a>=89)
{
printf("A2");
}
else if (a>=79)
{
printf("B1");
}
else if(a>=69)
{
printf("B2");
}
else if(a>=59)
{
printf("C1");
}
else if(a>=49)
{
printf("C2");
}
else if (a>=35)
{
printf("D");
}
else if (a<=30&&a>=0)
{
printf("fail");
}
else
{
printf("invalid marks");
}
getch();
}

