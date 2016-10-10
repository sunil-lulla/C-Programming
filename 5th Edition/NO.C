#include<stdio.h>
#include<conio.h>

void main()
{
  int num=0,count=0,dig=0;
  clrscr();
  printf("enter any number");
  scanf("%d",&num);
  printf("digit");
  scanf("%d",&dig);
  do
  {



	if(num%10==dig)
	  count++;
	 num/=10;


  }
  while(num>0);
	      printf("total %d didgits",count);


	      getch();
}
