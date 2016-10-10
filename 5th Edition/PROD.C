#include<stdio.h>
#include<conio.h>
int product(int num1,int num2)
{
int sum=0;
while(num1>0)
{
sum+=num2;
num1--;
}
return sum;
}
int quotient(int dividend,int divisor)
{
int quot=0;
while(dividend>=divisor)
{
dividend-=divisor;
quot++;
}
return quot;
}
int remainder(int dividend,int divisor)
{
while(dividend>=divisor)
{
dividend-=divisor;
}
return dividend;
}
void main()
{
int num1=0,num2=0;
clrscr();
printf("Enter any 2 numbers");
scanf("%d %d",&num1,&num2);
printf("%d",quotient(num1,num2));
getch();
}