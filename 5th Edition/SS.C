#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,num=0,i=0;
clrscr();
printf("enter the last number");
scanf("%d",&num);
for(i=1;i<=num;i++)
sum+=i*i;
printf("%d",sum);



getch();

}