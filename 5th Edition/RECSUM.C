#include<stdio.h>
#include<conio.h>
int sum(int n)
{
int num=0;
if(n==0)
	return 0;
scanf("%d",&num);
return num+sum(--n);
}
int tailSum(int n,int sum)
{
int num=0;
if(n==0)
return sum;
scanf("%d",&num);
return tailSum(--n,sum+num);
}


void main()
{
int n=0;
clrscr();
printf("Enter number of terms");
scanf("%d",&n);
printf("Sum is %d",sum(n));
printf("Sum is %d",tailSum(n,0));

getch();
}