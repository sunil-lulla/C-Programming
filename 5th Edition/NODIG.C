#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,count=0,dig=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
printf("enter the digit");
scanf("%d",&dig);
if(dig==0&&num==0)
++count;
while(num>0)
{
if(dig==num%10)
count++;
num/=10;
}
printf("%d",count);
getch();
}