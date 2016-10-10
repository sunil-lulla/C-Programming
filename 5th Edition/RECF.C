#include<stdio.h>
#include<conio.h>
int recfact(int num)
{
if(num==0)
return 1;
return num*recfact(num-1);
}

int fact=1;
void vrecfact(int num)
{
if(num==0)
{
return;
}
vrecfact(num-1);
printf("%d ",fact);



}
void main()
{
int num=0;
clrscr();
scanf("%d",&num);
printf("fact is %d\t",recfact(num));
vrecfact(num);
getch();



}