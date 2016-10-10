#include<stdio.h>
void main()
{
int num=0,count=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
count++;
num/=10;
if(num!=0)
{
count++;
num/=10;
}

if(num!=0)
{
count++;
num/=10;         
}

if(num!=0)
{
count++;
num/=10;

}

printf("%d",count);





getch();
}