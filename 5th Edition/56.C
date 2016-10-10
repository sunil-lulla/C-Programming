#include<stdio.h>
#include<conio.h>
int isValid(int d,int m,int y)
{
if(d<=0||d>31||m<=0||m>12||y<=0)
return 0;
if(m==2)
{
if(d==30||d==31)
return 0;
if(!(y%100&&y%4==0||y%400==0)&&d==29)
return 0;
}
if((m==4||m==6||m==9||m==11)&&d==31)
return 0;
return 1;
}
void main()
{
int d,m,y;
d=m=y=0;
clrscr();
printf("Enter the date in mm/dd/yy");
scanf("%d/%d/%d",&d,&m,&y);
if(isValid(d,m,y))
printf("Valid");
else
printf("Invalid");
getch();



}