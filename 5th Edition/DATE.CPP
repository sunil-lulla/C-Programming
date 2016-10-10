#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y,isValid=1,isLeap=0;
d=m=y=0;
clrscr();
printf("enter date in the format mm/dd/yy");
scanf("%d/%d/%d",&d,&m,&y);
if(d>31||d<0||m>12||m<0||y>2050||y<1850)
isValid=0;
else if(m==4||m==6||m==9||m==11)
   {
   if(m==31)
   isValid=0;
   }
else if(m==2)
{

       if((y%100!=0&&y%4==0)||y%400==0)
		isLeap=1;

       if(d==31||d==30||(isLeap==0 && d==29))
		isValid=0;






}











if(isValid!=0)
printf("The date %d/%d/%d is valid",d,m,y);
else
printf("The date %d/%d/%d is invalid",d,m,y);


getch();
}