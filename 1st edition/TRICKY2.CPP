#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a=4;
int i=2;

printf("%f %d\n",i/a,i/a);  //  0.500000  0
printf("%d %f\n",i/a,i/a); //   0 0.000000
printf("%d %f\n",i/a,3/2);//    0 0.000000
getch();


}