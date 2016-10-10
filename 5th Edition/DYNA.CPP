#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void main()
{       int i=0;
int n,*p;
clrscr();
  printf("enter size fo array");
  scanf("%d",&n);
  p=(int *)malloc(n * sizeof(int));

   if(p==NULL)
   {
	printf("no memory available");
	exit(EXIT_FAILURE);
    }

    for(i=0;i<n;i++)
    scanf("%d",p+i);

    for(i=0;i<n;i++)
    printf("%d\t",*(p+i));


	getch();





}