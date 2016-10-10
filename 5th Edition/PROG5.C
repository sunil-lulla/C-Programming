#include<stdio.h>
#include<conio.h>
void main()
{
int tmp,num=0;
clrscr();
scanf("%d",&num);
while(num>0)
{
tmp=tmp+num%10;

num=num/10;
}
printf("%d",tmp);
	       getch();

}