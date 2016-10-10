#include<stdio.h>
#include<conio.h>
int sum(int num)
{
int sum=0,i=1;
for(;i<=num/2;i++)
if(num%i==0)
sum+=i;
return sum;
}
void main()
{
int i=1;
int num=0,num2=0;
clrscr();
for(;i<=30000;i++)
{

  num=sum(i);
  if(num==i)
  {
  //printf("%d is perfect square\n",i);
  continue;
  }
  num2=sum(num);
  if(num2==i)
  printf("%d  %d are amicable\n",num,i);

}
getch();
}