#include<stdio.h>
#include<conio.h>
unsigned long int cubesum(unsigned long int);
void printArmStrong(unsigned long int,unsigned long int);
int isArmStrong(unsigned long int);
void main()
{
clrscr();
printArmStrong(153,19999);
getch();
}

void printArmStrong(unsigned long int n1,unsigned long int n2)
{
for(;n1<=n2;n1++)
{
if(isArmStrong(n1))
printf("%lu\n",n1);
}
}
int isArmStrong(unsigned long int num)
{
if(num==cubesum(num))
return 1;
return 0;


}




unsigned long int cubesum(unsigned long int num)
{
unsigned long int sum=0;
unsigned long int rem=0;
while(num>0)
{
rem=num%10;
sum+=(rem*rem*rem);
num/=10;
}
return sum;











}
