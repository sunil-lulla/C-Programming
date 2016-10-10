#include<stdio.h>
#include<conio.h>
int rsumm(int num)
{
if(num==0)
	return 0;
return num+rsumm(num-1);


}
void main()
{
int num=0;
clrscr();
printf("enter the number whose summation u want");
scanf("%d",&num);
printf("ths summation of %d is %d",num,rsumm(num));
getch();
}