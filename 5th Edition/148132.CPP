#include<stdio.h>
#include<CONIO.H>
int addAll(int n)
{
int sum=0,num=0;
if(n==0)
return 0;
printf("Enter number");
scanf("%d",&num);
sum=num+addAll(--n);
return sum;
}
void main()
{
clrscr();
printf("Hey");
getch();
}