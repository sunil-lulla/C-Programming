#include<stdio.h>
#include<conio.h>
int getJulianDay(int month,int year)
{
int julianDay=0;
switch(month-1)
{
case 11:
	julianDay+=30;
case 10:
	julianDay+=31;
case 9:
	julianDay+=30;
case 8:
	julianDay+=31;
case 7:
	julianDay+=31;
case 6:
	julianDay+=30;
case 5:
	julianDay+=31;
case 4:
	julianDay+=30;
case 3:
	julianDay+=31;
case 2:
	julianDay+=28;
case 1:
	julianDay+=31;
}
if(isLeap(year))
julianDay+=1;
return julianDay;
}
int isLeap(int year)
{
return (year%100&&year%4==0||year%400==0);
}
int isValid(d,m,y)
{
if(m<1||m>12||y<1||d<1||d>31)
return 0;
if(m==2)
{
if(m>29||(isLeap(y)==0&&d==29))
return 0;
}
if(m==4||m==6||m==9||m==11)
{
if(d==31)
return 0;
}
return 1;
}
void printDayOfWeek(d,m,y)
{
int f,h,fh,day,julian;
f=(y-1)/4;
h=(y-1)/100;
fh=(y-1)/400;
julian=getJulianDay(m,y)+d;
day=(y+julian+f+fh-h)%7;
switch(day)
{
case 0:
	printf("Saturday ");
	break;
case 1:
	printf("Sunday ");
	break;
case 2:
	printf("Monday ");
	break;
case 3:
	printf("Tuesday ");
	break;
case 4:
	printf("Wednesday ");
	break;
case 5:
	printf("Thursday ");
	break;
case 6:
	printf("Friday ");
	break;
}
}



void main()
{
int d1,m1,y1;
int d2,m2,y2;
clrscr();
printf("Enter date 1");
d1=d2=m1=m2=y1=m2=0;
scanf("%d/%d/%d",&d1,&m1,&y1);
printf("Enter date 2");
scanf("%d/%d/%d",&d2,&m2,&y2);
if(isValid(d1,m1,y1)==0||isValid(d2,m2,y2)==0)
{
printf("Dates are Invalid");
getch();
return;
}
printDayOfWeek(d1,m1,y1);
printDayOfWeek(d2,m2,y2);





getch();
}