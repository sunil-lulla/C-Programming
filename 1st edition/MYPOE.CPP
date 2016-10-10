#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,p,power=1;
printf("number ahnd  power");
scanf(" %d %d",&n,&p);
for(int i=1;i<=p;i++)
{
power=power*n;

}

	       printf("%d",power);
	       getch();

}