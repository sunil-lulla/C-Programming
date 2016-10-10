#include<stdio.h>
#include<conio.h>
int summ(int num)
{
int sum=0;
if(num/10==0)
{
printf("%d ",num%10);
return num;
}
sum= num%10+summ(num/10);
printf("%d ",num%10);
return sum;

}

void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
printf("sum of digits %d is %d",num,summ(num));
getch();
}