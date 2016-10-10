#include<stdio.h>
#include<conio.h>
void cpystr(char *,char *);
void main()
{
clrscr();

char arr[10],brr[10];
gets(arr);
cpystr(arr,brr);

printf(" ahrr %s\n brr %s ",arr,brr);
getch();



}
void cpystr(char *p,char  *q)
{
for(;*p;p++,q++)
{
*q=*p;

}

		 *q='\0';

}