#include<stdio.h>
#include<conio.h>
void main()
{
int num,k=0,j=0;
clrscr();
printf("enter the number");
scanf("%d",&num);

//12391
k=num%10;
k+=1;
num/=10;
num=num*10+k;


j=num%10;
num/=10;
k=num%10;
num/=10;
k+=1;
k%=10;
num=num*10+k;
num=num*10+j;


j=num%10;
num/=10;
k=num%10;
num/=10;
num=((num%10+1)%10+num/10*10);
num=num*10+k;
num=num*10+j;




j=num%1000;
num/=1000;
num=(num%10+1)%10+num/10*10;
num=num*1000+j;



j=num%10000;
num/=10000;
num=((num%10+1)%10+num/10*10);
num=num*10000+j;
















printf("\n%d",num);
	  getch();

}