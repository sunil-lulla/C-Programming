#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,sum,num;
scanf("%d",&num);
for(;num>0;num--)
{
  n1=num;



for(sum=0;n1>0;n1=n1/10)
{

	 sum=sum+(n1%10)*(n1%10)*(n1%10);
}
    if(sum==num)
   { printf("\narms%d",sum);
    }
}


getch();

}