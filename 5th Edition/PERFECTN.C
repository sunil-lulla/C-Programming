#include<stdio.h>
#include<conio.h>
void isPerfect(int num)
{
static int i=0;
static int sum=0;
++i;
if(i>num/2)
{
     if(sum==num)
     printf("The number is perfect");
     else
     printf("The number is not perfect");
     return;
}
if(num%i==0)
sum+=i;
isPerfect(num);
}

void main()
{
int num=0;
clrscr();
scanf("%d",&num);
isPerfect(num);
getch();
}