#include<stdio.h>
#include<conio.h>
void main()
{



int a=9,b=230;
int i=0;
int k=a>b?a:b;
clrscr();

//lcm
for(i=k;i<=a*b;i+=k)
{
if(!(i%a)&&!(i%b))
{
printf("lcm %d",i);
break;
}

//HCF



}




getch();
}


