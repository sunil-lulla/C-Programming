#include<stdio.h>
#include<conio.h>
void main()
{
	 int year;
clrscr();
  printf("enter any year");
  scanf("%d",&year);
if(year%100!=0 && year%400==0 || year%4==0)
printf("leap");
else printf("no no no no");


getch();
}