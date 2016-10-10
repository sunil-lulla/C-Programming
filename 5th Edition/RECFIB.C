#include<stdio.h>
#include<conio.h>
void recFib(i,j,n)
{
if(n==0)
return;
printf("%d %d ",i,j);
recFib(i+j,i+i+j,--n);
}
void main()
{
clrscr();
recFib(1,1,5);
getch();
}