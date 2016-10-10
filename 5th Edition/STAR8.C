#include<stdio.h>
#include<conio.h>
void main()
{   int i,j,k,l,m;
i=j=k=l=m=0;
clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
printf(" ");

for(k=1;k<=2*i-1;k++)
printf("%d",i);
printf("\n");
}

for(i=1;i<=4;i++)
{

for(j=1;j<=i;j++)
printf(" ");

for(k=1;k<=2*(4-i)+1;k++)
printf("%d",i);

printf("\n");



}



getch();
}