#include<stdio.h>
#include<conio.h>
int recfact(int);
void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
num=recfact(num);
printf("fact is %d",num);
getch();
}
int recfact(int num)
{
if(num==0)
return 1;
return num*recfact(num-1);
}