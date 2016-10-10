#include<stdio.h>
#include<CONIO.H>
int addAll(int n)
{
int num=0;
printf("Enter the number");
scanf("%d",&num);
if(n==1)
return num;
return num+addAll(--n);
}
void main()
{
int n=0;
clrscr();
printf("Enter how many numbers u want to add");
scanf("%d",&n);
if(n<0)
printf("Invalid choice");
else
printf("%d ",addAll(n));
getch();
}