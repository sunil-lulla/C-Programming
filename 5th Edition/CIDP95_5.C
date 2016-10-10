#include<stdio.h>
#include<conio.h>
void main()
{
int n=0,j=0,k=0,i=0,sum=0;
clrscr();
printf("enter the number of series u want");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
k=0;
for(j=1;j<=i;j++)
{
k=k*10+1;
}
printf("%d ",k);



sum+=k;
}


printf("bang bang%d",sum);








getch();
}