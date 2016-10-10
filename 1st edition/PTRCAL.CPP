#include<stdio.h>
#include<conio.h>
void pp();
void main()
{
void (*ptr)();
ptr=pp;
       ptr();

}
void pp()
{
printf("pointer is used");

}