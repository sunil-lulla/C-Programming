#include<stdio.h>
#include<conio.h>
int isPrDiv(int num,int i)
{
if(num%i==0)
return 1;
return 0;
}
int getPrDivSum(int num)
{
int i=1,sum=0,k=0;
for(i=1;i<=num/2;i++)
{
k=isPrDiv(num,i);
if(k)
sum+=i;
}
return sum;
}
int isPerfect(int num)
{
if(getPrDivSum(num)==num)
return 1;
return 0;
}
void main()
{
int num=0,i=1;
clrscr();
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(i%2!=0)
continue;
if(isPerfect(i))
printf("%d is Perfect\n",i);
}
getch();
}