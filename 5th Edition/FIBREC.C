#include<stdio.h>
#include<conio.h>
int fibb(int n)
{
if(n==1||n==0)
return 1;
return fibb(n-1)+fibb(n-2);


}

void main()
{
int nterms=0,i=0;
clrscr();
printf("Enter number");
scanf("%d",&nterms);
for(i=0;i<nterms;i++)
printf("%d ",fibb(i));
getch();




}