#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
scanf("%d %d",&i,&j);
for(int k=0;k<10;k++)
{
	    int temp;
	    temp=i+j;
	    printf("\n %d",temp);
	   i=j;
	   j=temp;

}

getch();




}