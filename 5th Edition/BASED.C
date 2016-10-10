#include<stdio.h>
#include<conio.h>
void based(int num,int base)
{
int rem;
rem=num%base;
if(num==0)
return;
based(num/base,base);
if(rem<10)
printf("%d",rem);
else
printf("%c",rem-10+'A');
}
void main()
{
int num=0,base=0;
clrscr();
printf("enter number");
scanf("%d",&num);
printf("enter base");
scanf("%d",&base);
based(num,base);
getch();
}