#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
void main()
{
int n;
int *p,i;
clrscr();
 printf("enter the number the values u want to store");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof( int));
 if(p==NULL)
 {
 printf("memory not available");
 exit(1);
 }

  for(i=0;i<n;i++)
  printf("\nvalue:%d",*(p+i));



getch();



}