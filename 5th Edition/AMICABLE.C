#include<stdio.h>
#include<conio.h>
int sumOfPDiv(int num)
{
int i=1,sum=0;
for(;i<=num/2;i++)
{
if(num%i==0)
sum+=i;
}
return sum;
}

void main()
{
int k=0,j=0,i;
clrscr();
for(i=1;i<=30000;i++)
{
	k=sumOfPDiv(i);

		j=sumOfPDiv(k);
  if(j==i&&k!=i)
  printf("%5d\t%5d\n",j,k);




}

getch();











}