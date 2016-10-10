#include<stdio.h>
#include<conio.h>
void table(int);
void main()
{
int num=0;
clrscr();
printf("enter a number");
scanf("%d",&num);
table(num);
getch();
}
void table(int num)
{
int i=0;
printf("\n");
for( i=1;i<=10;i++)
{
printf("%-3d*  %-3d = %3d\n",num,i,num*i);
}





}