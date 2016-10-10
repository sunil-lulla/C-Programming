#include<stdio.h>
#include<conio.h>

void convert(int num,int base)
{
if(num==0)
	return;
convert(num/base,base);
printf("%d ",num%base);
}

void main()
{
//int num=0;
//float n=0.0f;
clrscr();
convert(31999,2);
getch();
}