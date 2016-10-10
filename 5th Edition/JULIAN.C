#include<stdio.h>
#include<conio.h>
int getJulian(int month,int y)
{
int j=0;
switch(month-1)
{
case 11:
	j+=30;
case 10:
	j+=31;
case 9:
	j+=30;
case 8:
	j+=31;
case 7:
	j+=31;
case 6:
	j+=30;
case 5:
	j+=31;
case 4:
	j+=30;
case 3:
	j+=31;
case 2:
	j+=28;
case 1:
	j+=31;
}
if(isLeap(y)&&month>2)
j+=1;
return j;
}
int isLeap(int year)
{
return ((year%100&&year%4==0)||year%400==0);



}
void main()
{
int d,m,y;
d=m=y=0;
clrscr();
printf("Enter dd/mm/yy");
scanf("%d/%d/%d",&d,&m,&y);
printf("The julian day is %d",getJulian(m,y)+d);
getch();
}