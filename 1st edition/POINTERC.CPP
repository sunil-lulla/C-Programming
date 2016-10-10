#include<stdio.h>

#include<conio.h>
void sam(int x,float y)
{
printf("yo yo%d",x);

}
void main()
{

clrscr();
void (*func_ptr)(int,float);
	func_ptr=sam;
func_ptr(7,9);
getch();



}