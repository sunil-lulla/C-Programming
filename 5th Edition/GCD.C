#include<stdio.h>
#include<CONIO.H>
int gcd(int num1,int num2,int k)
{
if(num1%k==0&&num2%k==0)
return k;
gcd(num1,num2,++k);
}
void main()
{
int num1,num2;
num1=num2=0;
clrscr();
printf("Enter the numbers whose gcd u want");
scanf("%d %d",&num1,&num2);
printf("%d ",gcd(num1,num2,2));
getch();
}