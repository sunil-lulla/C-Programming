#include<stdio.h>
#include<conio.h>
void display(int num)
{
if(num==0)
return;
printf("%d ",num);
display(num-1);

}

void main()
{
int num;
clrscr();
printf("Enter any numner");
scanf("%d",&num);
display(num);
getch();
}