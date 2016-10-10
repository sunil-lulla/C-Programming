#include<stdio.h>
#include<conio.h>
void revString()
{
char ch;
scanf("%c",&ch);
if(ch!='\n')
revString();
printf("%c",ch);
}
void main()
{
clrscr();
printf("Enter a string");
revString();
getch();
}