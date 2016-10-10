#include<stdio.h>
#include<conio.h>
void main()
{

clrscr();
int a,b;      char ch;
do
{
printf("enter 2 numbers");
scanf("%d %d",&a,&b);
printf("sum is:%d",(a+b));
printf("do u want 2 continue");
scanf(" %c",&ch);
}
while((ch=='y')||(ch=='Y'));
printf("PRESS any key to quit...");
getch();



}