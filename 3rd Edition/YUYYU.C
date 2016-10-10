#include<stdio.h>
#include<conio.h>
void main()
{

int r;
char g;      int k;
float p;
clrscr();
printf("enter value for roll");
scanf("%d",&r);
fflush(stdin);
printf("enter value for grade");
scanf("%c",&g);
printf("enter value for percent");
scanf("%f",&p);


printf("\n u have entered the values of\n roll=%d\ngrade=%c\npercent=%.2f",r,g,p);
  getch();
}