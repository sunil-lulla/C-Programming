#include<stdio.h>
#include<conio.h>
int summ(int num)
{
int sum=0;
if(num==0)
return 0;
sum=num+summ(num-1);
printf("%d",num);
return sum;
}
void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
printf("summation is %d",summ(num));
getch();
}