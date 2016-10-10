#include<stdio.h>
#include<conio.h>
int power(int base,int exp)
{
if(exp==0)
return 1;
return base*power(base,exp-1);
}
void main()
{
int base,exp;
base=exp=0;
clrscr();
printf("Enter base and exponenet");
scanf("%d %d",&base,&exp);
printf(" power is :%d",power(base,exp));
getch();
}