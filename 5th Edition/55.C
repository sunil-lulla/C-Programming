#include<stdio.h>
#include<conio.h>
int isLeap(int year)
{
return (year%100&&year%4==0||year%400==0);
}
void main(void)
{
int year=0;
clrscr();
printf("Enter any year");
scanf("%d",&year);
if(isLeap(year))
printf("it is a leap year");
else
printf("its not alepa year");
getch();


}