#include<stdio.h>
void main()
{
printf("enter the date in dd/mm/yyyy format");
int d=0,m=0,y=0;

scanf("%d/%d/%d",&d,&m,&y);
int isInvalid=0;
if(d>31||d<1||m>12||m<1||y>2050||y<1850)
isInvalid=1;
else if(m==4||m==6||m==9||m==11)
	
		if(d>30)
		isInvalid=1;

	
else if(m==2)
if((((y%100!=0&&y%4==0)||y%400==0)&&y>29))	
	isInvalid=1;
if(isInvalid!=1)
	printf("valid date");
else
	printf("isvalid date");



}
