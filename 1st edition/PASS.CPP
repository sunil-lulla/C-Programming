
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5];
gotoxy(40,13);
for(int i=0;i<5;i++)
{

arr[i]=getch();
 printf("*");

}
getch();
printf("\n press any key to  see your password...\n");
getch();
for(i=0;i<5;i++)
{
printf("%c",arr[i]);
}




getch();

}