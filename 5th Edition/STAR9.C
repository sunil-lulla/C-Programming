#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,p;
i=j=k=l=p=0;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf(" ");
p=5+1;
for(k=1;k<=5-i+1;k++)
printf("%d",--p);

for(l=1;l<=5-i;l++)
printf("%d",++p);
printf("\n");

}




getch();
}