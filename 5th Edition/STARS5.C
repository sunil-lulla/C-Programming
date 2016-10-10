#include<stdio.h>
#include<conio.h>
void main()
{
     int k=0,i=0,j=0;
clrscr();


for(i=0;i<10;i++)
{
for(k=0;k<10-i;k++)
printf(" ");
for(j=0;j<=i;j++)
printf("* ");
printf("\n");


}


getch();

}