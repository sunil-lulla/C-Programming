#include<stdio.h>
#include<conio.h>
int getMul(int n1,int n2)
{
if(n1==1)
return n2;
if(n1%2!=0)
return n2+getMul(n1/2,2*n2);
return 0+getMul(n1/2,2*n2);
}

void main()
{
int n1,n2;
n1=n2=0;
clrscr();
scanf("%d %d",&n1,&n2);
printf("The sum is %d",getMul(n1,n2));

getch();


}