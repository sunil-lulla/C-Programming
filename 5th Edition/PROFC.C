#include<stdio.h>
#include<conio.h>
int prodDigits(int);
void main()
{
int num=0;
int k=0;
clrscr();
printf("enter num");
scanf("%d",&num);
k=prodDigits(num);
printf("prod is:%d",k);
getch();




}
int prodDigits(int  num)
{
int sum=1;
int rem=0;
while(num>0)
{
rem=num%10;
sum*=rem;
num/=10;
}
return sum;




}