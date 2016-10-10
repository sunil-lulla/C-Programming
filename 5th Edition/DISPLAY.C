#include<stdio.h>
#include<conio.h>
void disp(int);
void dispRev(int);
void main()
{
int num=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
disp(num);
leeedispRev(num);
getch();
}
void disp(int num)
{                                                                d
if(num==0)
return;
disp(num-1);
printf("%d",num);
}
void dispRev(int num)
{
if(num==0)
return;
printf("%d",num);
dispRev(num-1);
}
