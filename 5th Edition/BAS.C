#include<stdio.h>
#include<conio.h>
void baseC(int num,int base)
{
int r=0;
r=num%base;
if(num/base==0)
{
printf("%d",r);
return;
}
baseC(num/base,base);
if(r<10)
printf("%d",r);
else
printf("%c",r-10+'A');
}
void main()
{
int num,base;
num=base=0;
clrscr();
printf("enter number and base");
scanf("%d %d",&num,&base);
baseC(num,base);
dgetch();
}