#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3],i,j;
clrscr();
//taking value
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter value for %d row %d col\n",i,j);
scanf("%d",&arr[i][j]);

}
}
printf("you have enterd\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr[i][j]);

}
printf("\n");
}

getch();
}