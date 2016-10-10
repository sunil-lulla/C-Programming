#include<stdio.h>
#include<conio.h>
void displayDigit(int num)
{
if(num==0)
return;
displayDigit(num/10);
switch(num%10)
{
case 1:
	printf("One ");
	break;
case 2:
	printf("Two ");
	break;
case 3:
	printf("Three ");
	break;
case 4:
	printf("Four ");
	break;
case 5:
	printf("Five ");
	break;
case 6:
	printf("six ");
	break;
case 7:
	printf("seven ");
	break;
case 8:
	printf("Eight ");
	break;
case 9:
	printf("Nine ");
	break;
}



}

void main()
{
int num=0;
clrscr();
scanf("%d",&num);
displayDigit(num);
getch();
}