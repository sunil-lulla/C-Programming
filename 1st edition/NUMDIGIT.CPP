#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int n;
	static int sum;
	scanf("%d",&n);
	while(n>0)
	{
	sum=sum+(n%10);
		  n/=10;
	}

printf(" sum is %d  ",sum);
getch();



}