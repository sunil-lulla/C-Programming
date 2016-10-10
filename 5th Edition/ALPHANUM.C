#include<stdio.h>
#include<conio.h>
int isAlphaNumeric(char num)
{
return isNumber(num)||isCharacter(num);
}
int isNumber(char num)
{
return num>=48&&num<=57;
}
int isCharacter(char num)
{
return (num>=97&&num<=122)||(num>=65&&num<=97);
}
void main()
{
char ch='\0';
clrscr();
printf("Enter a character");
scanf("%c",&ch);
if(isAlphaNumeric(ch))
printf("is alphanumeric");
else
printf("is not alphanumeric");
getch();
}