#include<stdio.h>
#include<conio.h>
unsigned long toDecimal(int num,int base);
void main()
{
int num=0,base=0;
char ch='\0';
clrscr();
printf("enter the base for Octa press o and for binary press b");
scanf("%c",&ch);
base=ch=='b'?2:8;
printf("enter the number");
scanf("%d",&num);
lprintf("\nvalue is%lu",toDecimal(num,base));
getch();
}
unsigned long toDecimal(int num,int base)
{
unsigned long dec=0,a=1;
while(num>0)
{
    dec+=num%10*a;
    a*=base;
    num/=10;
}
return dec;
}