#include<stdio.h>
void main()
{
clrscr();
int n,a100,a50,a20,a10,a5,a2,a1;
printf(""enter number"");
scanf(""%d"",&n);
a100=n/100;
n=n%100;
a50=n/50;
n=n%50;
a20=n/20;
n=n%20;
a10=n/10;
n=n%10;
a5=n/5;
n=n%5;
a2=n/2;
n=n%2;
a1=n/1;
 printf(""notesof100 %d,\n-%d,\n- %d,\n- %d,\n- %d,\n- %d,\n1- %d"",a100,a50,a20,a10,a5,a2,a1);
getch();

}
