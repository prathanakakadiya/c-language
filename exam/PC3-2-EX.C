#include<stdio.h>
#include<conio.h>
main()
{
int BAS;
int HRA=10;
int DA=5;
int TA=8;
clrscr();
printf("enter value= ");
scanf("%d",&BAS);
HRA=(10*BAS)/100;
DA=(5*BAS)/100;
TA=(8*BAS)/100;
printf("answer=%d",HRA+DA+TA+BAS);
getch();
}