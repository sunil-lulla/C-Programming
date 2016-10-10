#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[][4]={
		{2,3,4,5},
		{6,7,8}
			 };
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d",arr[i][j]);

}
printf("\n");

}

getch();



}