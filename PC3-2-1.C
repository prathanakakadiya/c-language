#include<stdio.h>
#include<conio.h>

#define p printf
#define c clrscr
#define g getch
	main()
		{
		 const float pi=3.14;
		  int r=6;
		  float sum;
		  c();
		  sum=pi*r*r;
		  p("area of circle %.2f",sum);
		  g();
		}