#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int num;
printf("enter any number");
scanf("%d",&num);
if(num%3==0&&num%2==0)
  printf("divisible of both");
else
{
if(num%2==0)
printf("divisible by2");

else if(num%3==0)
printf("divisible by 3");

else
printf("not 3 and 2");
}
getch();

}