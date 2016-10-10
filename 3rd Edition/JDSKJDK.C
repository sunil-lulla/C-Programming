#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3];
clrscr();
//taking value
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("enter value for %d row %d col",i,j);
scanf("%d",&arr[i][j]);

}
}
printf("you have enterd");



}