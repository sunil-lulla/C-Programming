#include<stdio.h>
#include<conio.h>
void main()
{                           clrscr();
char a[10],*p;
p=a;
scanf("%s",p);

   while(*p)
   {
   printf("%c\n",*(p));
	    p++;
   }

		    getch();

}