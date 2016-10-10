#include<stdio.h>
#include<conio.h>
#include<math.h>
double getSum(int n)
{
int i=0;
double sum=0;
for(i=1;i<=n;i++)
{
sum+=(1.0/(i*i));
}
return sum;
}

void main()
{
int n=0;
clrscr();
printf("Enter the number of terms");
scanf("%d",&n);
printf("the sum of series is %.2lf",getSum(n));
getch();
}