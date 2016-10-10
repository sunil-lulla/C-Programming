#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,count=0;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{    n=n/10;
 count++;

}
printf("no is %d",count);
getch();


}