#include<stdio.h>
#include<CONIO.H>
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
void main()
{
int a,b;
a=b=0;
clrscr();
printf("Enter the number whose hcf u want");
scanf("%d %d",&a,&b);
printf("The HCF is %d",gcd(a,b));
getch();
}