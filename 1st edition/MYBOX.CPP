#include<stdio.h>
#include<conio.h>
void box();
void main()
{
clrscr();
getch();
box();
	   getch();
}
void box()
{
printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
getch();
printf("\n%c",186);  getch();
printf("\n%c",186);  getch();
printf("\n%c",186);  getch();
printf("\n%c",186);  getch();
printf("\n%c",186);  getch();
printf("\n%c",200);  getch();
printf("%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,188);    getch();
gotoxy(10,2);                                                        getch();
printf("%c",186);                                                    getch();
gotoxy(10,3);                                                        getch();
printf("%c",186);                                                    getch();
gotoxy(10,4);                                                        getch();
printf("%c",186);                                                    getch();
	 gotoxy(10,5);                                               getch();
printf("%c",186);                                                    getch();
		    gotoxy(10,6);                                    getch();
printf("%c",186);                                                    getch();
	gotoxy(4,4);getch();
printf("Sahm");


}

