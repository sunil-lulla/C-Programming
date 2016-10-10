#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
printf("enter ur age");
scanf("%d",&age);
if(age>=18)
printf("u can vote");
else
{
if(age<0)
printf("invalid age");
else
printf("u cant vote");

}
getch();


}