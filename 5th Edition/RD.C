#include<stdio.h>
#include<conio.h>
void showDigits(int num)
{
if(num/10==0)
{
printf("%d",num);
return;
}
printf("%d",num%10);
showDigits(num/10);
}
void main()
{
int num=0;
clrscr();
scanf("%d",&num);
showDigits(num);
getch();
}