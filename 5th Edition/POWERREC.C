#include<stdio.h>
#include<conio.h>
int power(int a,int n)
{
if(n==0)
	return 1;
if(n%2==0)
	{
	printf("%d--%d",a,n);
	getch();
	return power(a*a,n/2); }
else
	{
	printf("else: %d--%d",a,n);
	getch();
	return a*power(a*a,(n-1)/2);
}  }

void main()
{
int a,n;
a=n=0;
clrscr();
printf("Enter the a and n");
scanf("%d %d",&a,&n);
printf("The pow is %d",power(a,n));
getch();
}