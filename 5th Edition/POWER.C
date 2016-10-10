#include<stdio.h>
#include<conio.h>
float power(float a,int n)
{
if(n==0)
return 1;
return a*power(a,n-1);



}
void main()
{
int n=0;
float a=0.0f;
clrscr();
printf("enter any number and ppower");
scanf("%f %d",&a,&n);
printf("%.1f raise to power %d is %.1f",a,n,power(a,n));
getch();
}