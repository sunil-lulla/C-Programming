#include<stdio.h>
#include<conio.h>
int *func(int *p,int n);
void main()
{
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n=5,*p;
clrscr();
p=func(arr,n);
printf("address of p %p\naddress of array %p \n value of pl%d",p,arr,*p);

getch();
}

int *func(int *p,int n)
{

 return p+n;

}