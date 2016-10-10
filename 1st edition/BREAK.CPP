#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
     int sum=0;	int count=0;     int n;
for(;;)
{        printf("enter any number number may be +ve\npress 0 for quit ");
scanf("%d",&n);
if(n==0)
break;
else if(n>0)
{
sum=sum+n;
count++;

}
printf(" sum is %d\navg is%d",sum,(sum/count));
}

getch();

}