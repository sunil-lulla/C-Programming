#include<stdio.h>
#include<conio.h>
double convert( double length,char unitType)
{
return unitType=='i'?length*2.54:length/2.54;
}

void main()
{
doublee num;
char ms;
clrscr();
printf("Enter the measuring unit i/c");
scanf("%c",&ms);
printf("Enter length");
scanf("%lf",&num);
printf("%lf",convert(num,ms));
getch();
}