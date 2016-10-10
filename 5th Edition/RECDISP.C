#include<stdio.h>
#include<conio.h>
static int a=1;
void recDisplay(int num)
{
if(a==num)
{
return;
}
getch();
printf("%d",a);
++a;
recDisplay(num);
}
void main()
{
int num=0;
clrscr();
scanf("%d",&num);
recDisplay(num);
getch();
}