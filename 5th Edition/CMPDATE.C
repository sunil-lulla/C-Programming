#include<stdio.h>
#include<conio.h>
int cmpDate(int d1,int m1,int y1,int d2,int m2,int y2)
{
//int julian1,julian2;
//julian1=julian2=0;
if(y1<y2)
return 1;
if(y1>y2)
return -1;
if(m1<m2)
return 1;
if(m1>m2)
return -1;
if(d1<d2)
return 1;
if(d1>d2)
return -1;
/*
julian1=getJulianDay(m1,y1)+d1;
julian2=getJulianDay(m2,y2)+d2;
if(julian1==julian2)
return 0;
if(julian1<julian2)
return 1;
return -1;
*/
return 0;
}
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



void main()
{
int d1,m1,y1,d2,m2,y2;
int dResult;
d1=m1=y1=d2=m2=y2=0;
clrscr();
printf("Enter date one");
scanf("%d/%d/%d",&d1,&m1,&y1);
printf("Enter date two");
scanf("%d/%d/%d",&d2,&m2,&y2);
dResult=cmpDate(d1,m1,y1,d2,m2,y2);
if(dResult==0)
printf("Both are equal");
else if(dResult==1)
printf("date 1 is greater");
else
printf("date 2 is greter");
getch();
}