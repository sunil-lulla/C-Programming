#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
printf("enter any char");
scanf("%c",&c);
if(c>=97&&c<=122)
printf("it is small %c",c);
  else if(c>=65&&c<=90)
  printf("capital %c",c);
  else
  printf("dont know");
getch();

}