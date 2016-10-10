#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int a;
printf("enter any number");
scanf("%d",&a);
int i=0;
while(i++<10)
{

printf("\n%d * %d= %d",a,i,a*i);

}

getch();

}