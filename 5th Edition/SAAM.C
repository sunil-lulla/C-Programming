#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,sum=0;
clrscr();
printf("enter x raised to the power y");
scanf("%d %d",&a,&b);

while(b>=0)
{
sum+=a;
--b;
}
printf("%d",sum);
getch();
}