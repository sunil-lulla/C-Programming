#include<stdio.h>
#include<conio.h>
void disp(int num)
{
static int rd=-1;
++rd;
if(num==0)
{
printf("recursive depth is%d",rd);
return;
}disp(num-1);
printf("%d",num);
}
void main()
{
int num=0;
clrscr();
scanf("%d",&num);
disp(num);
getch();
}