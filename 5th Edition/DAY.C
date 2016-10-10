#include<stdio.h>
#include<conio.h>
void main()
{
int j=0;
int d=0,m=0,y=0;
clrscr();
printf("enter the date in mm/ddd/yy format");
scanf("%d/%d/%d",&d,&m,&y);
j=d;


switch(m)
{
case 12:j+=30;
case 11:j+=31;
case 10:j+=30;
case 9: j+=31;
case 8: j+=31;
case 7: j+=30;
case 6: j+=31;
case 5: j+=30;
case 4: j+=31;
case 3: j+=28;
case 2: j+=31;
}
if((y%100&&!(y%4)||!(y%400))&&m>2)
j+=1;
printf("%d",j);




switch((j+y+((y-1)/4)+((y-1)/100)+(y-1)/400)%7)
{

case 0:
printf("monday");
break;


case 1:
printf("tueaday");
break;
case 2:
printf("wednesday");
break;
case 3:
printf("thursfday");
break;
case 4:
printf("friday");
break;
case 5:
printf("saturday");
break;
case 6:
printf("sunday");
break;




}







getch();
}