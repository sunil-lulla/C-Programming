#include<stdio.h>
#include<conio.h>
int sumPrDivisor(int num)
{
int i=1;
int sum=0;
for(i=1;i<=num/2;i++)
{
if(num%i==0)
sum+=i;
}
return sum;
}
int isPrime(int num)
{
return sumPrDivisor(num)==1;
}
void main()
{
int j=0,num=0,i=1;
clrscr();
printf("Enter any number");
scanf("%d",&num);

for(i=1;i<=100;i++) {
if(j%25==0)
getch();
++j;
if(isPrime(i))
printf("Number is prime %d\n",i);
else
printf("Number is composite %d\n",i);}
getch();





}