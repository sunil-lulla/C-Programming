#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[4][2];
		   static int sum;
for(int i=0;i<4;i++)
{
for(int j=0;j<2;j++)
{

scanf("%d",&arr[i][j]);
       sum=sum+arr[i][j];
}

}
printf("\n%d",sum);
getch();


}