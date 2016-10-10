#include<stdio.h>
#include<conio.h>
void main()
{ int i,n,max=0;
clrscr();

for(i=1;i<=8;i++)
{
printf("enter no  %d",i);
scanf("%d",&n);
if(n>max)
{

max=n;

}



}

printf("largest number is %d",max);

getch();
}