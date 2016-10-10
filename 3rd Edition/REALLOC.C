#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int main(void)
{
   int *mem,i,n,n1;
   clrscr();
   printf("enter the no.of integers u want to store");
   scanf("%d",&n);
   mem = (int *)malloc(n*sizeof(int));
   printf("\n address of first:%p",mem);
   for(i=0;i<n;i++)
   scanf("%d",mem+i);
   for(i=0;i<n;i++)
   printf("\nvalue:%d",*(mem+i));





   getch();
   return 0;
}
