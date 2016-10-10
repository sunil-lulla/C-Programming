#include<stdio.h>
#include<conio.h>
void  main()
{
int r=0,i=0,j=0;
// tringular stars
clrscr();
printf("enter no of rows\n");
scanf("%d",&r);
printf("\t\t\t\t");
for(i=1;i<=r;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n\t\t\t\t");
}

printf("\n press any key to get new star");
getch();
printf("\nrow plz");
scanf("%d",&r);
	 printf("\t\t\t\t");
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
printf("%d",i);
printf("\n\t\t\t\t");
}
printf("\n press any key to get new star");
getch();
printf("\nrow plz");
scanf("%d",&r);
	 printf("\t\t\t\t");
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n\t\t\t\t");
}



getch();
}