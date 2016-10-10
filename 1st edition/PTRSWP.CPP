#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
clrscr();
int a,b;
a=20,b=60;
			printf("a%d \nb%d",a,b);
swap(&a,&b);
printf("a%d \nb%d",a,b);

getch();


}
void swap(int *p,int *q)
{

int *t;
*t=*p;
*p=*q;
*q=*t;

}