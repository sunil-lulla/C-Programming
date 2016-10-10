#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long int sum=0,num=0,i=0;
clrscr();
printf("enter any number");
scanf("%lu",&num);
for(i=1;i<=num;i++)
{
  sum=i*i*i;
  if(sum%3==0)
  printf("%lu:%lu\t",i,sum);



}


getch();






}