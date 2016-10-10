#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int n;     int i;
printf("enter any number");
scanf("%d",&n);
if(n>0)
{        i=0;
   while(i++<n)
   printf("%d\n",i);

}
else if(n<0)

{
	  while(i++<n)
      {	  printf("%d\n",i);

}
}
else
printf("zero");
getch();

}