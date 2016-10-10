#include<stdio.h>
#include<conio.h>
void main()
{
int r=0,i=0,j=0,count=0;
clrscr();
scanf("%d",&r);

for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%3d",i+j);
}
printf("\n");

}




scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
if((i+j)%2)
printf("%3d",0);
else
printf("%3d",1);

}
printf("\n");

}




scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%5d",++count);

}
printf("\n");

}



getch();


}