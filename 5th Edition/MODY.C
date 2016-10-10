
#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int num,j=0,k=1,i=5;
clrscr();
printf("enter the number");
scanf("%d",&num);



while(i>0)
{

j=num%k;
num=(num/k%10+1)%10+num/k*10*10;
num=num*1+j;
k*=10;
--i;
}

/*
//12391
j=num%1;
num=(num/1%10+1)%10+num/10*10;
num=num*1+j;
//12392

j=num%10;//2
num=(num/10%10+1)%10+num/100*10;
num=num*10+j;
//12302

j=num%100;
num=(num/100%10+1)%10+num/1000*10;
num=num*100+j;
//12402


j=num%1000;
num=(num/1000%10+1)%10+num/10000*10;
num=num*1000+j;



j=num%10000;
num=(num/10000%10+1)+num/100000*10;
num=num*10000+j;




















  */

printf("\n%d",num);
	  getch();

}