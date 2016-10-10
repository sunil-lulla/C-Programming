#include<stdio.h>
#include<conio.h>
int sumPdivisors(int);
void main()
{
int a=0, num=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
a=sumPdivisors(num);
printf("\nsump%d",a);
getch();
}
int sumPdivisors(int num)
{
int i=0,sum=0;
for(i=1;i<=num/2;i++)
{
if(num%i==0)
{
printf("%d\t",i);
sum+=i;
}
}
return sum;
}