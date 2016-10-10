#include<stdio.h>
#include<conio.h>
int mdroot(int num)
{

int mdr=1;
while(num/10==0){
while(num>0)
{
mdr=mdr*num%10;
num/=10;
}
num=mdr;
}





return mdr;
}
void main()
{
int num=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
printf("%d",mdroot(num));
getch();
}