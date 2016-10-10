#include<stdio.h>
#include<conio.h>
int gcd(int num,int num2,int k)
{
if(k<=0||(num%k==0&&num2%k==0))
return k;
gcd(num,num2,--k);
}
void main()
{
int k=0, num=0,num2=0;
clrscr();
printf("Enter the number whose HCF u want");
scanf("%d %d",&num,&num2);
k=gcd(num,num2,num>num2?num2:num);
printf("the HCF is %d",k<0?0:k);
getch();







}