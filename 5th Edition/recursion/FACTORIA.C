#include<stdio.h>
#include<conio.h>
unsigned long int fact(unsigned long int n)
{
if(n==0)
return 1;
return n*fact(n-1);
}
unsigned long int fact2(unsigned long int n)
{
if(n>0)
return n*fact2(n-1);
return 1;
}
unsigned long int fact3(unsigned long int n)
{
int mul=1;
if(n>0)
{
mul=n*fact3(n-1);
}
return mul;
}
void main()
{
unsigned long int a;
clrscr();
scanf("%lu",&a);
printf("%lu\t",fact2(a));
printf("%lu\t",fact(a));
printf("%lu",fact3(a));
getch();
}