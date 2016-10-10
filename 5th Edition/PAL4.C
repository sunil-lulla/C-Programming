#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i=0,temp=0;
clrscr();
for(i=1000;i<=9999;i++)
{
sum=0;
temp=i;
while(temp>0)
{
sum=sum*10+temp%10;
temp/=10;
}
if(sum==i)
printf("%4d\t",i);

}








getch();
}