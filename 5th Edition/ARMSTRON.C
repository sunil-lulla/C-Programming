#include<Math.h>
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,sum=0,num;
	clrscr();
for(i=100;i<=999;i++)
{       num=i;
	sum=0;

  while(num>0)
  {





     sum+=(num%10)*(num%10)*(num%10),num/=10;


     }
  if(sum==i)   {
	printf("%d\t",i);  }


}



getch();
return 0;
}