#include<stdio.h>
#include<conio.h>
#include<math.h>
int isPrime(int num)
{
int i=2;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
return 0;
}
return 1;
}
void main()
{
int i=1,flag=1;
clrscr();
/*
for(i=3;i<=1000;i+=2)
{
if(isPrime(i)&&isPrime(i+2))
printf("%d %d\n",i,i+2);
} */
for(i=3;i<=1000;i+=2)
{
 if(isPrime(i+2))
	{
		if(flag==1)
		printf("%d %d\t",i,i+2);
		else
		flag=1;

	}
  else
	flag=0;
}
getch();


}