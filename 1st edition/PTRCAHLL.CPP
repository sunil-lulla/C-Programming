#include<stdio.h>
#include<conio.h>
int  sam(int x)
{
printf("Sahm %d",x);
       return x;
}                 void main()
{
clrscr();
int (*functn_ptr)(int);
functn_ptr=sam;
   int k=  functn_ptr(3);

getch();


}