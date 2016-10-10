#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int a;
int *p;
p=&a;
scanf("%d",p);
printf("%d",*p);
getch();

}