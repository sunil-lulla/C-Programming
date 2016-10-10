#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
void main()
{
int *p,n,i;
clrscr();
scanf("%d",&n);
p= (int *)calloc(n,sizeof(long double));

for(i=0;i<n;i++)
printf("\nvalue:%d",*(p+i));

			     printf("done");

getch();
}
