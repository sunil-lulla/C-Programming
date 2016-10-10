#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();


/*int a;
int *p;
p=&a;
/*printf("a is %u",a);
printf("\nadd is %u",&a);
printf("\np is %u",p);
printf("\nvalue at p is %u",*p);
printf("\n&p is %u",&p);
printf("\na* is %u",&a);
printf("size of ptr is %u",sizeof(p));
printf("sizze of a is %u",sizeof(getch)); */
/*int a[5];
char b[]={'a','a'};
char c[10]; */
int a;
char *p;
p=(char *)&a;
printf("\n  a%u",&a);
printf("\n p %u",p);
printf("\nsize of p++ is %u",p++);
getch();

}