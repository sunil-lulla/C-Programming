#include<stdio.h>
#include<conio.h>
char toUpperCase(char ch)
{
return ch>=97&&ch<=122?ch-32:ch;
}
void main()
{
char ch='\0';
clrscr();
printf("Enter any character");
scanf("%c",&ch);
putchar(toUpperCase(ch));
getch();
}