#include<stdio.h>
#include<conio.h>
void main()
{

int i=0,j=0,k=0;
clrscr();
for(i=1;i<=5;i++)
{
for(k=0;k<5-i;k++)
printf(" ");
for(j=1;j<i*2;j++)
printf("*");
printf("\n");
}
getch();
}