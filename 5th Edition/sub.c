#include<stdio.h>
void main()
{
int d1,m1,y1;
printf("enter the  date no1 ");
scanf("%d/%d/%d",&d1,&m1,&y1);

int d2,m2,y2;
printf("enter the  date no2");
scanf("%d/%d/%d",&d2,&m2,&y2);

int d,m,y;



if(d1>d2)
{
if(d2==3)
{

if((y2%100!=0&&y2%4==0)||y2%400==0)
d2+=29;
else
d2+=28;
}
else if(m2==5||m2==7||m2==10||m2==12)
d2=d2+30;

else 
d2+=31;
m2-=1;
}
if(m1>m2)
{

m2+=12;
y2-=1;
}


y=y2-y1;
d=d2-d1;
m=m2-m1;

printf("\n date %d  month %d year %d",d,m,y);

}
