
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int a;
printf("enter number");
scanf("%d",&a);
int i=0;
while(i++<10)
{

printf("\n %d *  %d=  %d\n",a,i,a*i);

}
getch();


}