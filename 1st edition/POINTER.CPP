#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[7];
int *p;
printf(" arr[0] %u",&arr[0]);
printf("\n arr[1] %u",&arr[1]);
printf("\n arr[2] %u",&arr[2]);
printf("\n arr[3] %u",&arr[3]);
printf("\n arr[4] %u",&arr[4]);
printf("\n arr[5] %u",&arr[5]);
printf("\n arr[6] %u",&arr[6]);
printf("\n arr[7] %u",&arr[7]);
int *q;
p=&arr[1];
q=&arr[5];
printf(" i-j %u \n *i-*j %d",q-p,*q-*p);


getch();



}