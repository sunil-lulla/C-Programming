#include<stdio.h>
#include<conio.h>
void main()
{
int k,n,i=1,j=0;
clrscr();
printf("enter any number");
scanf("%d",&n);
k=n;
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
++j;
k-=i;
if(k==0)
{
printf("square root is: %d",j);
break;
}
}
if(k<0)
{
printf("not a perfect square");
break;
}
}
getch();
}