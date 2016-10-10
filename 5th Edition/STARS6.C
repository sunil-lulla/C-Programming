#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,p;
i=0,j=0,k=0,l=0,p=0;
clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
printf(" ");
p=i-1;
for(k=1;k<=i;k++)
printf("%d",++p);
for(l=1;l<=i-1;l++)
printf("%d",--p);
	    printf("\n");



}



getch();
}