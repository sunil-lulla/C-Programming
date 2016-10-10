#include"stdio.h"
#include"conio.h"
int isPrime(unsigned long int);
void printPrimes(unsigned long,unsigned long);
void main()
{
unsigned long num1,num2;
clrscr();
printf("enter number1\n");
scanf("%lu",&num1);
printf("enter number2\n");
scanf("%lu",&num2);
printPrimes(num1,num2);
getch();
}
void printPrimes(unsigned long num1,unsigned long num2)
{

unsigned long int i=0;
for(i=num1;i<=num2;i++)
{
if(isPrime(i))
{
printf("%d\t",i);
}
}
}






int isPrime(unsigned long num)
{
int i=0;
for( i=2;i<num;i++)
{
if(num%i==0)
{

break;

}
}
if(num==i)
return 1;
return 0;
}