#include<stdio.h>
#include<conio.h>
int resum(int num)
{
if(num/10==0)
return num;
return num%10+resum(num/10);
}
void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
printf("ths sum of digits of %d is %d",num,resum(num));
getch();



}