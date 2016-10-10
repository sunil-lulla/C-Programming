#include<stdio.h>
#include<conio.h>
void main()
{    int i,j,k,l,m,n,o,p;
clrscr();


for(i=1;i<=5;i++)
{

	p=i-1;
for(j=1;j<=5-i;j++)
printf(" ");


for(k=1;k<=i;k++)
printf("%d",++p);



for(l=1;l<=i-1;l++)
printf("%d",--p);
printf("\n");


}

for(i=1;i<=4;i++)
{
p=4-i;
for(j=1;j<=i;j++)
printf(" ");
for(k=1;k<=4-i+1;k++)
printf("%d",++p);

for(l=1;l<4-i+1;l++)
printf("%d",--p);



      printf("\n");


}















getch();
}