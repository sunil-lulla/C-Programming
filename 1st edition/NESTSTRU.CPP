#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

struct s
{
int s;
char b;


};
struct s1
{
int s;
struct s sj;


};

struct s1 sjj={2,3,'h'};

 printf("%d %d %c",sjj.s,sjj.sj.s,sjj.sj.b);
      getch();
}