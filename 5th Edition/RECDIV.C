#include<stdio.h>
#include<conio.h>
int get(int num,int div)
{
int sum=0;
if(div>num/2 && div!=1)
	return 0;
if(num%div==0)
{
printf(" %d ",div);
sum=div;
}
sum+=get(num,div+1);
return sum;
}

int getStatic(int num)
{
int sum=0;
int static i=0;
++i;
if(i>num/2)
return 0;
if(num%i==0)
{
printf(" %d ",i);
sum=i;
}
sum+=getStatic(num);
return sum;




}
void main()
{
int  num=0;
clrscr();
scanf("%d",&num);
printf("The total of sum of them is %d",get(num));
printf("The total of sum of them using static is %d",getStatic(num));
getch();
}