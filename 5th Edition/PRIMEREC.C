#include<stdio.h>
#include<CONIO.H>
void pFactors(int num)
{
int i=2;
if(num==1)
{
printf("\b\b");
return;
}
while(num%i!=0)
++i;
printf("%d",i);
if(num/i!=0)
printf(" * ");
pFactors(num/i);
}
void main()
{
int num;
num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
pFactors(num);
printf("= %d",num);
getch();
}