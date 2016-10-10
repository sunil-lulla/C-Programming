#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l;
clrscr();

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf("*");
for(k=1;k<=2*(5-i)+1;k++)
printf(" ");
for(l=1;l<=i;l++)
printf("*");



printf("\n");



}



getch();

}