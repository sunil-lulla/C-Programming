#include<stdio.h>
#include<conio.h>
void convert(int num,int base);
void main()
{
int num,base;
num=base=0;
clrscr();
printf("Enter the number and radix that you want");
scanf("%d %d",&num,&base);
convert(num,base);
getch();
}
void convert(int n,int b)
{
//base case
if(n==0)
return;
//recursive case
convert(n/b,b);
if(n%b<10)
printf("%d",n%b);
else
printf("%c ",n%b-10+'A');


}
