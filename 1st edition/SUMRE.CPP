#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,rev=0,org;

printf("enter any numbere");
scanf("%d",&n);
org=n;
while(n>0)
{

rev=(rev*10)+(n%10);
   n=n/10;

}
     printf("\n%d",rev);
     int sum;
     sum=(rev%10)+(org%10);
	  printf("reverse is%d",sum);
getch();

}