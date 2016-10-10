#include<stdio.h>
#include<conio.h>

struct s1
{
int a;
char b;
float c;
};

void main()
{
/*
struct s1
{
int a;
char b;
float c;
};
  */
struct s1 s2={23,65,80};
/*
s2.a=89;
s2.b='a';
s2.c=78.8;
  */


clrscr();
printf("%d %c %d",s2.a,s2.b,s2.c);

getch();



}