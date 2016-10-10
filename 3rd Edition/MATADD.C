#include<stdio.h>
#include<conio.h>
void  main()
{
int arr[3][3],brr[3][3],i=0,j=0;
clrscr();
//input for arr
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
//brr input
printf("brr");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&brr[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

printf("%d",arr[i][j]+brr[i][j]);

}
printf("\n");
}


getch();


}