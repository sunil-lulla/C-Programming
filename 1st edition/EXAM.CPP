#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{ clrscr();
int n,i;
printf("enter the no of elements");
scanf("%i",&n);
int *p;
p =(int *) malloc(n*sizeof(int));
for(i=0;i<n;i++)
{          printf("enter number");
  scanf("%i",p+i);

}



for(i=0;i<n;i++)

{
printf("\n\t%d",*(p+i));

}
free(p);
getch();
}