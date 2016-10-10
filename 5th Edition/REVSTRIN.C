#include<stdio.h>
#include<conio.h>
void revString()
{
char ch;
scanf("%c",&ch);
if(ch!=10)
revString();
printf("%c",ch);
}
void main()
{
clrscr();
revString();
getch();

}