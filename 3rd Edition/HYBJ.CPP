#include<stdio.h>
void main()
{
int n,*p,i;
clrscr();
 printf("enter the number the values u want to store");
 scanf("%d",&n);
 p=malloc(n*sizeof(int));
 if(p==NULL)
 {
 printf("memory not available");
 exit(1);
 }
  for(i=0;i<n;i++)
  scanf("%d",p+i);

  for(i=0;i<n;i++)
  printf("\nvalue:%d",*(p+i));



getch();



}