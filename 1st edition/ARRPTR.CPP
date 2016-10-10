#include<stdio.h>
#include<conio.h>
void mahin()
{
clrscr();
int a[10];

int *b=a;
for(int i=0;i<10;i++)
{
scanf("%d",b);
b++;

}

for(int j=0;j<10;j++)
{
		printf("\n %u",*b);
		b++;

}
	 getch();

}