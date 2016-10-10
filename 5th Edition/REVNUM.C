#include<stdio.h>
#include<conio.h>
int rev_num(int num,int temp)
{
if(num==0)
return temp;
return rev_num(num/10,temp*10+num%10);
}

int rev_num_static(int num)
{
int static temp = 0;
if(num==0)
	return temp;
temp=temp*10+num%10;
	return rev_num_static(num/10);
}

void main()
{
int num=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
printf("The reversed number is %d \n",rev_num(num,0));
printf("The reversed number using static is %d",rev_num_static(num));

getch();

}