#include"stdio.h"
#include"conio.h"
void main()
{


clrscr();
struct sam
{

int s;
char k;

}
k[5];
for(int i=0;i<5;i++)
{
printf("enter the value");
fflush(stdin);
      scanf(" %d %c ",&k[i].s,&k[i].k);

}
for( i=0;i<5;i++)
{
printf("int s:%d\nchar k:",k[i].s,k[i].k);


}

//k.s=10;
//k.k='s';
//printf("%d %c",k.s,k.k);
getch();



}