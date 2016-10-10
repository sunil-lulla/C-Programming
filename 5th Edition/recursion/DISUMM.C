#include<stdio.h>
#include<conio.h>
int disumm(int num)
{
int sum=0;
if(num<=0)
return 0;
sum=num+disumm(num-1);
printf("%d",num);
return sum;
}
void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
printf("%d",disumm(num));
getch();
}