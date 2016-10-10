#include<stdio.h>
#include<conio.h>
void main()
{
int r=0;
char g=NULL;
float p=0.0;
clrscr();
printf("enter values for roll,grade,percent");
scanf("%d %c %f",&r,&g,&p);
printf("\n u have entered the values of\n roll=%d\ngrade=%c\npercent=%.2f",r,g,p);
	       getch();
}