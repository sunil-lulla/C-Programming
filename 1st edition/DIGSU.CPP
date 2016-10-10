#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,sum=0;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{
sum=sum+(n%10);
n=n/10;

}
    printf("sum is%d",sum);

getch();

}