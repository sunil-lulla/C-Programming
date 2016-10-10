#include<stdio.h>
#include<conio.h>
int twinPrimes(int n1,int n2)
{
int i=2,flag=0;
int num=0;
num=n1;
a:
for(i=2,flag++;i<=num/2;i++)
{
if(num%i==0)
return 0;
}
if(flag!=2)
{
num=n2;
goto a;
}
return 1;
}

void main()
{
int i=3;
clrscr();
for(i=3;i<=1000;i+=2)
{
if(twinPrimes(i,i+2))
printf("%d %d\t",i,i+2);
}
getch();




}