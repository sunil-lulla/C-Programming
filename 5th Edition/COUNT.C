#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,i=0;
clrscr();
printf("enter any number");
scanf("%d",&num);


num/=10;
++i;
while(num>0)
{
num/=10;
i++;
if(i==11)
break;
}
printf("%d",i);
getch();
}