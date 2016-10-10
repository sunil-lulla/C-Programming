#include<stdio.h>
#include<conio.h>

void factors(int num)
{
int i=2;
if(num==1)
   return;
while(num%i!=0)
	++i;
printf("%d ",i);
factors(num/i);
}





void main()
{
int num=0;
clrscr();
scanf("%d",&num);
factors(num);
getch();
}