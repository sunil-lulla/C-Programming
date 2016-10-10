#include<stdio.h>
#include<conio.h>

float exponent(float num,int n)
{
if(n==0)
   return 1;
return num*exponent(num,n-1);
}

void main()
{
int num=0;
float n=0.0f;
clrscr();
scanf("%f",&n);
scanf("%d",&num);
printf("%.0f ",exponent(n,num));
getch();
}