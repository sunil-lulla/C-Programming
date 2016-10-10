#include<stdio.h>
#include<conio.h>
int recSum(int num)
{
int sum;
if(num/10==0)
	{
	printf("%d",num%10);
	return num;
	}
sum=num%10+recSum(num/10);
printf("%d",num%10);
return sum;

}
void main()
{
int num=0;
clrscr();
printf("Enter the number");
scanf("%d",&num);
printf("The Sum of digit %d",recSum(num));
getch();
}