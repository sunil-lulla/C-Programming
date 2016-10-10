#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
if(a%b==0)
	return b;

return gcd(b,a%b);

}


void main()
{
int n1,n2;
n1=n2=0;
clrscr();
printf("Enter numbers");
scanf("%d %d",&n1,&n2);
printf("GCD: %d",gcd(n1,n2));
getch();
}
