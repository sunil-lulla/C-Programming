#include<stdio.h>
#include<conio.h>
int rsumm(int num);
void main()
{
int num=0;
clrscr();
scanf("%d",&num);
printf("summation of %d is %d",num,rsumm(num));
getch();
}
int rsumm(int n)
{
int sum=0;
if(n==0)
return 0;


sum=sum+rsumm(n-1);
printf("%d",num);










}